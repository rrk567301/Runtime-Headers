@interface SLSIconAppearanceConfiguration : NSObject <NSCopying>

@property unsigned int iconAppearanceTheme;
@property unsigned int iconTintColorName;
@property (retain) struct CGColor { } *otherIconTintColor;
@property unsigned int appearanceTheme;

+ (id)fetchCurrentIconAppearanceConfiguration;

- (void)save;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_initWithIconAppearanceTheme:(unsigned int)a0 iconTintColorName:(unsigned int)a1 otherIconTintColor:(struct CGColor { } *)a2 appearanceTheme:(unsigned int)a3;

@end
