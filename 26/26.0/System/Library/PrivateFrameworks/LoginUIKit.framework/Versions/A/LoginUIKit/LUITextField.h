@interface LUITextField : NSTextField

+ (void)initialize;
+ (Class)cellClass;

- (id)_textColor;
- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (id)designatedFocusRingView;
- (void)setPlaceholderString:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (id)_placeholderTextColor;
- (void)setShouldSmoothFonts:(BOOL)a0;
- (BOOL)shouldSmoothFonts;

@end
