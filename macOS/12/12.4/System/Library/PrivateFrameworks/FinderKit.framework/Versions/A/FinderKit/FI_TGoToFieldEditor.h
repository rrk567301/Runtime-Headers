@interface FI_TGoToFieldEditor : NSTextView

- (id)initWithCoder:(id)a0;
- (void)doCommandBySelector:(SEL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForUserCompletion;

@end
