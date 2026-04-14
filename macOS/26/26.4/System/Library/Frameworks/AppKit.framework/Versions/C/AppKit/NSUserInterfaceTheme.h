@interface NSUserInterfaceTheme : NSObject {
    NSUserInterfaceTheme *_fallbackTheme;
}

+ (id)aquaTheme;
+ (id)guideRulesForThemeName:(id)a0;

- (id)name;
- (id)init;
- (void)dealloc;
- (double)fallbackStandardSpacingForOrientation:(long long)a0;
- (id)initWithFallbackTheme:(id)a0;
- (BOOL)resolvedValue:(double *)a0 forSymbolicConstant:(id)a1 inConstraint:(id)a2 containerView:(id)a3;

@end
