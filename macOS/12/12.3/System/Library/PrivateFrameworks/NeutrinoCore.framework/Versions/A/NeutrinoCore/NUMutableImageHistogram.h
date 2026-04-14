@interface NUMutableImageHistogram : NUImageHistogram

+ (Class)_histogramClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_luminance;
- (void)write:(id /* block */)a0;
- (id)_red;
- (id)_green;
- (id)_blue;

@end
