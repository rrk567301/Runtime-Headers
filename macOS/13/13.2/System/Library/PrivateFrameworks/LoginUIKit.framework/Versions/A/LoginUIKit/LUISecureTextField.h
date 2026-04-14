@interface LUISecureTextField : NSSecureTextField

+ (Class)cellClass;

- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)designatedFocusRingView;
- (id)_textColor;
- (void)setPlaceholderString:(id)a0;
- (id)_placeholderTextColor;
- (BOOL)shouldSmoothFonts;
- (void)setShouldSmoothFonts:(BOOL)a0;

@end
