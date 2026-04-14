@interface LUI2SecureTextField : NSSecureTextField

+ (Class)cellClass;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)designatedFocusRingView;
- (void)setPlaceholderString:(id)a0;

@end
