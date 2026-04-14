@interface RPIOSurfaceObject : NSObject <NSSecureCoding> {
    struct __IOSurface { } *_ioSurface;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (struct __IOSurface { } *)ioSurface;
- (void)dealloc;
- (void)setIOSurface:(struct __IOSurface { } *)a0;

@end
