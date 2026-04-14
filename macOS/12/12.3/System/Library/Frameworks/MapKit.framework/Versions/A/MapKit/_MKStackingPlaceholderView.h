@class NSLayoutConstraint;

@interface _MKStackingPlaceholderView : NSView {
    NSLayoutConstraint *_contentHeightConstraint;
}

@property (nonatomic) double contentHeight;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithHeight:(double)a0;

@end
