@interface CMIBarePixelBuffer : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;

+ (id)_ioImplementationForVersion:(unsigned int)a0;

- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)initWithFile:(id)a0;
- (BOOL)saveToFile:(id)a0;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)_validateBaseHeader:(const struct { unsigned int x0; unsigned int x1; } *)a0;
- (id)cvpbData;
- (id)cvpbDataWithVersion:(unsigned int)a0;
- (BOOL)saveToFile:(id)a0 withCVPBVersion:(unsigned int)a1;
- (BOOL)updatePixelBufferWithData:(id)a0;
- (BOOL)updatePixelBufferWithFile:(id)a0;

@end
