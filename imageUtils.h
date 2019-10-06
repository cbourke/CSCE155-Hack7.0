
/**
 * A structure that represents a single pixel value using
 * the RGB (red-blue-green) color model.  Each integer
 * value is in the range [0, 255].
 */
typedef struct {
  int red;
  int green;
  int blue;
} Pixel;

/**
 * Loads an image file specified by the given file path/name.
 * The height and width are indicated in the two pass-by-reference variables.
 * The image is returned as a two-dimensional array of Pixel values
 * of dimension (height x width) where the pixel at [0][0] corresponds to
 * the top-left most pixel value.
 */
Pixel **loadImage(const char *filePath, int *height, int *width);

/**
 * Saves the given image (which is assumed to have the same format as in
 * loadImage() and is of the given height x width) to the file specified
 * by the given path/name.
 */
void saveImage(const char *filePath, Pixel **image, int height, int width);

/**
 * Create a deep copy of a given image (a separate array containing all the same elements in the same order)
 *
 * @param image a 2D array of {@code Pixel}s to copy
 * @param height the height of the image
 * @param width the width of the image
 * @return the created deep copy
 */
Pixel ** copyImage(Pixel **image, int height, int width);

/**
 * Flip the image horizontally (along a vertical axis, as though a mirror was held to the right side of the image)
 *
 * @param image a 2D array of {@code Pixel}s to flip
 * @param height the height of the image
 * @param width the width of the image
 */
void flipHorizontal(Pixel **image, int height, int width);

/**
 * Flip the image vertically (along a horizontal axis, as though a mirror was held above the image)
 *
 * @param image a 2D array of {@code Pixel}s to flip
 * @param height the height of the image
 * @param width the width of the image
 */
void flipVertical(Pixel **image, int height, int width);

/**
 * Rotate the image 90° clockwise
 *
 * @param image a 2D array of {@code Pixel}s to rotate
 * @param height the height of the image
 * @param width the width of the image
 */
Pixel ** rotateClockwise(Pixel **image, int height, int width);
