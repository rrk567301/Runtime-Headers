@interface SBPropertyThunk : SBThunk {
    unsigned int _code;
    unsigned int _ae_type;
    BOOL _is_value;
}

+ (id)thunksForElement:(id)a0 inDocument:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned int)code;
- (id)signatureFormat;
- (id)selectorNameForName:(id)a0;
- (id)initWithElement:(id)a0 inDocument:(id)a1;
- (unsigned int)ae_type;
- (BOOL)is_value;

@end
