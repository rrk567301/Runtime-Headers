@interface CAMediaTimingFunctionBuiltin : CAMediaTimingFunction {
    unsigned int _index;
}

+ (char)supportsSecureCoding;

- (id)description;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void)_getPoints:(double *)a0;
- (void)encodeWithCAMLWriter:(id)a0;

@end
