@class NSView;

@interface _MKCalloutDetailWrapperView : NSView {
    NSView *_view;
}

+ (BOOL)clipsToBounds;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithView:(id)a0;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (void).cxx_destruct;

@end
