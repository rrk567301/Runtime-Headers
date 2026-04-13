@interface VIImage : NSObject <NSCopying>

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) unsigned int orientation;

+ (id)imageWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1;

@end
