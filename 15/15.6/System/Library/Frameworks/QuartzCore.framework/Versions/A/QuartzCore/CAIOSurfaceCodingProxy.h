@interface CAIOSurfaceCodingProxy : CACodingProxy {
    struct __IOSurface { } *_surface;
    BOOL _locked;
}

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)decodedObject;

@end
