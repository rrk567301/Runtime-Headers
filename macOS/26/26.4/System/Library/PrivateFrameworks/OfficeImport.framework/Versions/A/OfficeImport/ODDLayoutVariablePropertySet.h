@interface ODDLayoutVariablePropertySet : OADProperties {
    int mDirection;
    BOOL mHasDirection;
}

+ (id)defaultProperties;

- (int)direction;
- (id)initWithDefaults;
- (id)description;
- (void)setDirection:(int)a0;
- (BOOL)hasDirection;

@end
