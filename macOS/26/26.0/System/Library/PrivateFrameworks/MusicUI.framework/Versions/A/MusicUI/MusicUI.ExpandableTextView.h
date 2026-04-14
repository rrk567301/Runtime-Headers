@interface MusicUI.ExpandableTextView : NSView {
    void /* unknown type, empty encoding */ maximumNumberOfLinesInTitle;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_moreButton;
    void /* unknown type, empty encoding */ modalViewController;
    void /* unknown type, empty encoding */ modalPresentationDescriptor;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)accessibilityValue;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
