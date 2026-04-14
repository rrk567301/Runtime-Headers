@class NSView;

@interface _MKCalloutDetailWrapperView : NSView {
    NSView *_view;
}

+ (BOOL)clipsToBounds;

- (double)firstBaselineOffsetFromTop;
- (void).cxx_destruct;
- (double)lastBaselineOffsetFromBottom;
- (id)initWithView:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
