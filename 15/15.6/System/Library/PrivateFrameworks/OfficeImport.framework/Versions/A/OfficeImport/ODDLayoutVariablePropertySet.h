@interface ODDLayoutVariablePropertySet : OADProperties {
    int mDirection;
    char mHasDirection;
}

+ (id)defaultProperties;

- (id)description;
- (int)direction;
- (void)setDirection:(int)a0;
- (id)initWithDefaults;
- (char)hasDirection;

@end
