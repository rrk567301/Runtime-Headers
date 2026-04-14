@interface CAIOSurfaceCodingProxy : CACodingProxy {
    struct __IOSurface { } *_surface;
    BOOL _locked;
}

+ (BOOL)supportsSecureCoding;

- (id)decodedObject;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;

@end
