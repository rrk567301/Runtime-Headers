@class NSString, NUPixelFormat, CIImage;

@interface NUProcessorCache : NSObject {
    CIImage *_processorImage;
}

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NUPixelFormat *pixelFormat;
@property (readonly, nonatomic) CIImage *inputImage;
@property (readonly, nonatomic) CIImage *outputImage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0;

@end
