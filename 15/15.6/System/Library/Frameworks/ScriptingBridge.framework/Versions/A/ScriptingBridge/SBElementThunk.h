@interface SBElementThunk : SBThunk {
    unsigned int _code;
}

+ (id)thunksForElement:(id)a0 inDocument:(id)a1;

- (char)isEqual:(id)a0;
- (void)invoke:(id)a0;
- (id)initWithElement:(id)a0 inDocument:(id)a1;

@end
