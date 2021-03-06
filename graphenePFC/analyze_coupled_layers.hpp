//
//  analyze_coupled_layers.hpp
//  graphenePFC
//
//  Created by Rachel Zucker on 9/1/16.
//  Copyright © 2016 Rachel Zucker. All rights reserved.
//

#ifndef analyze_coupled_layers_hpp
#define analyze_coupled_layers_hpp

#include <stdio.h>
#include "matrix_types.hpp"
#include "postprocessing.hpp"

void FindNeighbors(const int row, const int col, std::vector<Point>* possible_neighbors, const padded_matrix_t& atom_sites, const double r0);

void MakeUpDownMatrices(padded_matrix_t* up_sites, padded_matrix_t* down_sites,
                        const padded_matrix_t& atom_sites, const double r0);

bool IsItAnUpAtom(const std::vector<Point>& triangle);

void NearestThreePoints(std::vector<Point>* nearest_three_atoms, const std::vector<Point>& possible_neighbors);


void AnalyzeCoupledLayers(const matrix_t& top, const matrix_t& bottom, const double r0, const double time, const std::string directory_string_t, const std::string directory_string_b);

#endif /* analyze_coupled_layers_hpp */
