@interface SBPropertyThunk : SBThunk {
    unsigned int _code;
    unsigned int _ae_type;
    char _is_value;
}

+ (id)thunksForElement:(id)a0 inDocument:(id)a1;

- (char)isEqual:(id)a0;
- (unsigned int)code;
- (unsigned int)ae_type;
- (id)signatureFormat;
- (id)initWithElement:(id)a0 inDocument:(id)a1;
- (char)is_value;
- (id)selectorNameForName:(id)a0;

@end
