@interface CADSpotlightLogger : NSObject

+ (void)log:(id)a0;
+ (void)logError:(id)a0;
+ (void)_logWithFormat:(id)a0 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1 prependErrorMarker:(char)a2;

@end
