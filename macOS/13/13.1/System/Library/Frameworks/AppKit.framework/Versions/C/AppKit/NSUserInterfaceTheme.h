@interface NSUserInterfaceTheme : NSObject {
    NSUserInterfaceTheme *_fallbackTheme;
}

+ (id)aquaTheme;
+ (id)guideRulesForThemeName:(id)a0;

- (void)dealloc;
- (id)name;
- (id)init;
- (BOOL)resolvedValue:(double *)a0 forSymbolicConstant:(id)a1 inConstraint:(id)a2 containerView:(id)a3;
- (double)fallbackStandardSpacingForOrientation:(long long)a0;
- (id)initWithFallbackTheme:(id)a0;

@end
