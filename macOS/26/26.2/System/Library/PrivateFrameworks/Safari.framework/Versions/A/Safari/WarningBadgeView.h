@class NSView, NSArray;

@interface WarningBadgeView : NSImageView {
    NSArray *_activeConstraints;
    NSView *_anchorView;
}

@property (retain, nonatomic) NSView *anchorView;

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
