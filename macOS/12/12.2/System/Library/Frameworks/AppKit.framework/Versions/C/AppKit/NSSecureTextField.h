@interface NSSecureTextField : NSTextField

+ (void)initialize;
+ (Class)cellClass;
+ (void)setCellClass:(Class)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned short)_bulletCharacter;
- (BOOL)_shouldSuppressIndicators;
- (void)_setBulletCharacter:(unsigned short)a0;
- (void)_commonSecureTextFieldInit:(id)a0;

@end
