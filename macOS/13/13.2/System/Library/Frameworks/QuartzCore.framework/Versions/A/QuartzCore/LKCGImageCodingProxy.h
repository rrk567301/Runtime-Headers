@interface LKCGImageCodingProxy : CACodingProxy {
    struct CGImage { } *_image;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObject:(id)a0;
- (id)decodedObject;

@end
