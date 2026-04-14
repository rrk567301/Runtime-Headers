@class NSView;

@interface _MKCalloutDetailWrapperView : NSView {
    NSView *_view;
}

+ (BOOL)clipsToBounds;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;

@end
