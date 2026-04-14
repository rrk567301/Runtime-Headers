@class NSString;

@interface EDTableStylesCollection : EDCollection {
    NSString *mDefaultTableStyleName;
    NSString *mDefaultPivotStyleName;
}

- (void).cxx_destruct;
- (id)defaultTableStyle;
- (id)defaultPivotStyle;
- (id)objectWithName:(id)a0;
- (id)defaultTableStyleName;
- (void)setDefaultTableStyleName:(id)a0;
- (id)defaultPivotStyleName;
- (void)setDefaultPivotStyleName:(id)a0;

@end
