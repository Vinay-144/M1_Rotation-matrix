

/**
 * @file header.h
 * @author Vinay-144
 * @brief Transformation matrix
 *
 */

#ifndef __HEADER_H__
#define __HEADER_H__


/**
* @brief Multiplicatican matrix of 3*3
* @param[in] matrix_ 
* @param[in] x_axis 
* @param[in] y_axis
* @param[in] z_axis

*/
void mult_matrix(float [][3],float, float, float);

/**
* @brief Multiplicatican matrix of 4*4
* @param[in] matrix_ 
* @param[in] x_axis 
* @param[in] y_axis
* @param[in] z_axis

*/


void mult_matrix_t(float [][4],float ,float ,float );

/**
* @brief scaling matrix
* @param[in] scaling_factor 
* @param[in] x_axis 
* @param[in] y_axis
* @param[in] z_axis

*/


void Scaling_matrix(float ,float ,float ,float );


/**
* @brief Multiplicatican matrix of 4*4
* 
* @param[in] x_axis 
* @param[in] y_axis
* @param[in] z_axis
* @param[in] u_axis 
* @param[in] v_axis
* @param[in] w_axis

*/

void translation_matrix(float ,float,float , float , float , float );

/**
* @brief Multiplicatican matrix of 4*4
* @param[in] angle 
* @param[in] x_axis 
* @param[in] y_axis
* @param[in] z_axis
* @param[in] case 
* @param[in] alt_case

*/


void standard_matrix(float ,float ,float ,float ,int  ,int);


#endif  /* #define __HEADER_H__ */

