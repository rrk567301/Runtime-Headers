@class PRSTextView, NSImageView, NSTextField, NSLayoutConstraint;

@interface PRSThreeMoviesSliceView : PRSMoviesSliceView

@property NSImageView *posterImageView1;
@property NSImageView *posterImageView2;
@property NSImageView *posterImageView3;
@property NSTextField *titleTextField1;
@property NSTextField *titleTextField2;
@property NSTextField *titleTextField3;
@property PRSTextView *subtitleTextView1;
@property PRSTextView *subtitleTextView2;
@property PRSTextView *subtitleTextView3;
@property NSLayoutConstraint *subtitleTextViewMinHeightConstraint1;
@property NSLayoutConstraint *subtitleTextViewMinHeightConstraint2;
@property NSLayoutConstraint *subtitleTextViewMinHeightConstraint3;

- (unsigned long long)columnCount;
- (id)accessibilityChildren;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)mouseUp:(id)a0;
- (void)_sendAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (BOOL)exposesAccessibilityChildren;
- (id)posterImageViewAtIndex:(unsigned long long)a0;
- (id)subtitleTextViewAtIndex:(unsigned long long)a0;
- (id)subtitleTextViewMinHeightConstraintAtIndex:(unsigned long long)a0;
- (id)titleTextFieldAtIndex:(unsigned long long)a0;

@end
