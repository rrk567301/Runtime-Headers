@class CIImage;

@interface VisualGeneration.NonMaxLineSuppressFilter : CIFilter {
    void /* unknown type, empty encoding */ inputImage;
    void /* unknown type, empty encoding */ threshold;
}

@property (nonatomic, readonly) CIImage *outputImage;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
