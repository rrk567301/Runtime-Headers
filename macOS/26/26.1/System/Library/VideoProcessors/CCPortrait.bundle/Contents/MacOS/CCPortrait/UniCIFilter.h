@class CIFilter;

@interface UniCIFilter : UniKernel

@property (retain, nonatomic) CIFilter *filter;

- (id)initWithDevice:(id)a0;
- (id)run:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)outputImage:(id)a0;
- (id)inputImageArray;
- (id)outputNameArray;
- (id)inputNameArray;
- (id)outputImageArray;

@end
