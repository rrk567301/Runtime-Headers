@class NSView;

@interface _MKCalloutDetailWrapperView : NSView {
    NSView *_view;
}

+ (BOOL)clipsToBounds;

- (id)initWithView:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)firstBaselineOffsetFromTop;
- (void).cxx_destruct;
- (double)lastBaselineOffsetFromBottom;

@end
