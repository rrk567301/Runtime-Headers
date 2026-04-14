@interface NSSecureTextField : NSTextField

+ (void)initialize;
+ (Class)cellClass;
+ (void)setCellClass:(Class)a0;

- (id)initWithCoder:(id)a0;
- (unsigned short)_bulletCharacter;
- (void)_commonSecureTextFieldInit:(id)a0;
- (void)_setBulletCharacter:(unsigned short)a0;
- (BOOL)_shouldSuppressIndicators;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
