@interface RPIOSurfaceObject : NSObject <NSSecureCoding> {
    struct __IOSurface { } *_ioSurface;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (struct __IOSurface { } *)ioSurface;
- (void)encodeWithCoder:(id)a0;
- (void)setIOSurface:(struct __IOSurface { } *)a0;

@end
