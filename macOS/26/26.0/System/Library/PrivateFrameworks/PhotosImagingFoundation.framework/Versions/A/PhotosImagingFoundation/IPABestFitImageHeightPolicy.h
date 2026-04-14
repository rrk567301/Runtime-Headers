@interface IPABestFitImageHeightPolicy : IPAImageSizePolicy {
    double _fitHeight;
}

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHeight:(double)a0;
- (BOOL)isBestFitPolicy;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;

@end
