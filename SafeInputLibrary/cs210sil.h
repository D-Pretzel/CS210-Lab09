/* cs210sil.h
 * =============================================================
 *    Name:
 * Section:
 * Purpose: Creating a safe input library
 * =============================================================
 */

/** ----------------------------------------------
 * @brief safely read one integer from stdin
 * @return the integer value read (if successful)
 * pre none
 * post function exits if no integer was read
 */
int getIntegerSafe();

/** ----------------------------------------------
 * @brief safely read one long from stdin
 * @return the long value read (if successful)
 * pre none
 * post function exits if no long was read
 */
long getLongSafe();

/** ----------------------------------------------
 * @brief safely read one float from stdin
 * @return the float value read (if successful)
 * pre none
 * post function exits if no float was read
 */
float getFloatSafe();

/** ----------------------------------------------
 * @brief safely read one double from stdin
 * @return the double value read (if successful)
 * pre none
 * post function exits if no double was read
 */
double getDoubleSafe();

/** ----------------------------------------------
 * @brief safely read one char from stdin
 * @return the char value read (if successful)
 * pre none
 * post function exits if no char was read
 */
char getCharSafe();
