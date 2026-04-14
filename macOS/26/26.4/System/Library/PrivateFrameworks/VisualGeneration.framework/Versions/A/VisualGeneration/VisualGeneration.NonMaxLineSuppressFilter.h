@class CIImage;

@interface VisualGeneration.NonMaxLineSuppressFilter : CIFilter {
    void /* unknown type, empty encoding */ inputImage;
    void /* unknown type, empty encoding */ threshold;
}

@property (nonatomic, readonly) CIImage *outputImage;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
