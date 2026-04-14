@interface ABPKImageData : NSObject

@property (nonatomic, retain) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(double)a1;

@end
