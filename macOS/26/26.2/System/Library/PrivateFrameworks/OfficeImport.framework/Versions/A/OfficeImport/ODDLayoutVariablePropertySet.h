@interface ODDLayoutVariablePropertySet : OADProperties {
    int mDirection;
    BOOL mHasDirection;
}

+ (id)defaultProperties;

- (int)direction;
- (void)setDirection:(int)a0;
- (id)initWithDefaults;
- (id)description;
- (BOOL)hasDirection;

@end
