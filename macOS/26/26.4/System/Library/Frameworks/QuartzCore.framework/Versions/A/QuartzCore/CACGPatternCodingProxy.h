@interface CACGPatternCodingProxy : CACodingProxy {
    struct CGPattern { } *_pattern;
}

+ (BOOL)supportsSecureCoding;

- (id)decodedObject;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
