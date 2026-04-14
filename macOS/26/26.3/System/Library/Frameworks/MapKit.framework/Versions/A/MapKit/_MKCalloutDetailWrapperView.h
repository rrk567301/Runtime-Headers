@class NSView;

@interface _MKCalloutDetailWrapperView : NSView {
    NSView *_view;
}

+ (BOOL)clipsToBounds;

- (id)initWithView:(id)a0;
- (double)lastBaselineOffsetFromBottom;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)firstBaselineOffsetFromTop;

@end
