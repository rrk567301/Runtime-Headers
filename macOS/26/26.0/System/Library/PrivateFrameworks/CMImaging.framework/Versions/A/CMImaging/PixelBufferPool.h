@interface PixelBufferPool : NSObject <NSCopying> {
    unsigned long long _width;
    unsigned long long _height;
    unsigned int _format;
    unsigned long long _memoryPoolId;
    struct __CVPixelBufferPool { } *_pool;
}

@property (readonly, nonatomic) struct __CVPixelBufferPool { } *pool;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 memoryPoolId:(unsigned long long)a3;

@end
