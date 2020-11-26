static const char norm_fg[] = "#c7c6c3";
static const char norm_bg[] = "#10100c";
static const char norm_border[] = "#8b8a88";

static const char sel_fg[] = "#c7c6c3";
static const char sel_bg[] = "#67912D";
static const char sel_border[] = "#c7c6c3";

static const char urg_fg[] = "#c7c6c3";
static const char urg_bg[] = "#8B7462";
static const char urg_border[] = "#8B7462";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
