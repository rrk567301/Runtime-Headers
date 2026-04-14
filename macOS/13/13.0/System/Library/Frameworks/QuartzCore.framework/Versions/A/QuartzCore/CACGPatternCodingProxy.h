@interface CACGPatternCodingProxy : CACodingProxy {
    struct CGPattern { } *_pattern;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObject:(id)a0;
- (id)decodedObject;

@end
