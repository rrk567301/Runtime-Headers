@class IOSurface;

@interface MADVideoSessionTTRFrame : NSObject <NSSecureCoding> {
    IOSurface *_surface;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
@property (readonly, nonatomic) unsigned int orientation;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 orientation:(unsigned int)a2;

@end
