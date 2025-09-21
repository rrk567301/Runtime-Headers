@class NSTextField, NSString, NSView, NSArray;

@interface BadgeView : NSView {
    NSTextField *_badgeTextLabel;
    NSArray *_activeConstraints;
    NSView *_anchorView;
}

@property (retain, nonatomic) NSView *anchorView;
@property (copy, nonatomic) NSString *text;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_mainWindowDidChange:(id)a0;

@end
