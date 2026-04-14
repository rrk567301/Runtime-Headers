@interface LKCGColorCodingProxy : CACodingProxy {
    struct CGColor { } *_color;
}

+ (BOOL)supportsSecureCoding;

- (id)decodedObject;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
