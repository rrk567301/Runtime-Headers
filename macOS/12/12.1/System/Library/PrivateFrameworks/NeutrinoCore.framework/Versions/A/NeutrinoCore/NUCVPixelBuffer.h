@interface NUCVPixelBuffer : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *CVPixelBuffer;

- (void)dealloc;
- (id)init;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0;

@end
