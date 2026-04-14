@interface CAMediaTimingFunctionBuiltin : CAMediaTimingFunction {
    unsigned int _index;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (Class)classForCoder;
- (void)encodeWithCAMLWriter:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_getPoints:(double *)a0;

@end
