@interface CAIOSurfaceCodingProxy : CACodingProxy {
    struct __IOSurface { } *_surface;
    BOOL _locked;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)decodedObject;
- (void)encodeWithCoder:(id)a0;

@end
