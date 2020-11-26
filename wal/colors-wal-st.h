const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#10100c", /* black   */
  [1] = "#8B7462", /* red     */
  [2] = "#67912D", /* green   */
  [3] = "#6C915C", /* yellow  */
  [4] = "#949969", /* blue    */
  [5] = "#A8C357", /* magenta */
  [6] = "#6D8A91", /* cyan    */
  [7] = "#c7c6c3", /* white   */

  /* 8 bright colors */
  [8]  = "#8b8a88",  /* black   */
  [9]  = "#8B7462",  /* red     */
  [10] = "#67912D", /* green   */
  [11] = "#6C915C", /* yellow  */
  [12] = "#949969", /* blue    */
  [13] = "#A8C357", /* magenta */
  [14] = "#6D8A91", /* cyan    */
  [15] = "#c7c6c3", /* white   */

  /* special colors */
  [256] = "#10100c", /* background */
  [257] = "#c7c6c3", /* foreground */
  [258] = "#c7c6c3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
