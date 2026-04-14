@class CIImage;

@interface RAWLinearSpacePlaceholder : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
}

+ (id)customAttributes;

- (id)customAttributes;
- (id)outputImage;
- (void).cxx_destruct;

@end
