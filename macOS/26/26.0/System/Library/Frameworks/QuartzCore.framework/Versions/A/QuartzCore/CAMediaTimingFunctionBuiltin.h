@interface CAMediaTimingFunctionBuiltin : CAMediaTimingFunction {
    unsigned int _index;
}

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)_getPoints:(double *)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
