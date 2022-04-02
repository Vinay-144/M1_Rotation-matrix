# Problem statement
* These tranformations are often used in order to provide 3-D user experience. 
* Used in Linear algebra, physics, computer graphics etc;
* Used in image processing 
  To determine transformed co-ordinates
* Robotics to determine 
  To determine end effector position, robotic arm position.

# Approach
* Create a switch case where user selects to convert from reference co-ordinates to rotated co-ordinates or viceversa.
* Create matrix header function that takes in either reference co-ordinates or rotated co-ordinates.
 -In X,Y,Z for reference co-ordinates.
 -In U,V,W for rotated co-ordinates.
* Create matrix 

# 4W1H
* Where: Often used in Linear algebra, Physics, Computer Graphics 3-D printing etc
* When:  ALgorithms used back the in 1950's were non-compatibe and were computationally slow It is used all the time by any graphical related devices.
* Who:   computer provides input i.e reference frame and get desired output in rotated frame.
* when:  After lot of research they came up with brilliant method to  transform so that user experience 3-D expirience on 2_D screen 
* How:   A standard matrix is multiplied with user given input to obtain desired output.
  - It basically consist of rotation.
  - Translation.
  - Scaling.
  

# Information
* In linear algebra, a rotation matrix is a transformation matrix that is used to perform a rotation in Euclidean space.

rotates points in the xy plane counterclockwise through an angle θ with respect to the positive x axis about the origin of a two-dimensional Cartesian coordinate system. To perform the rotation on a plane point with standard coordinates v = (x, y), it should be written as a column vector, and multiplied by the matrix R:

If x and y are the endpoint coordinates of a vector, where x is cosine and y is sine, then the above equations become the trigonometric summation angle formulae. Indeed, a rotation matrix can be seen as the trigonometric summation angle formulae in matrix form. One way to understand this is say we have a vector at an angle 30° from the x axis, and we wish to rotate that angle by a further 45°. We simply need to compute the vector endpoint coordinates at 75°.

The examples in this article apply to active rotations of vectors counterclockwise in a right-handed coordinate system (y counterclockwise from x) by pre-multiplication (R on the left). If any one of these is changed (such as rotating axes instead of vectors, a passive transformation), then the inverse of the example matrix should be used, which coincides with its transpose.

Since matrix multiplication has no effect on the zero vector (the coordinates of the origin), rotation matrices describe rotations about the origin. Rotation matrices provide an algebraic description of such rotations, and are used extensively for computations in geometry, physics, and computer graphics. In some literature, the term rotation is generalized to include improper rotations, characterized by orthogonal matrices with a determinant of −1 (instead of +1). These combine proper rotations with reflections (which invert orientation). In other cases, where reflections are not being considered, the label proper may be dropped. The latter convention is followed in this article.

Rotation matrices are square matrices, with real entries. More specifically, they can be characterized as orthogonal matrices with determinant 1; that is, a square matrix R is a rotation matrix if and only if RT = R−1 and det R = 1. The set of all orthogonal matrices of size n with determinant +1 forms a group known as the special orthogonal group.

Reference:
https://en.wikipedia.org/wiki/Rotation_matrix





