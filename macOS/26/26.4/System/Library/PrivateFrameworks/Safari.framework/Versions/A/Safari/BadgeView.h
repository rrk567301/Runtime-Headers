@class NSTextField, NSString, NSView, NSArray;

@interface BadgeView : NSView {
    NSTextField *_badgeTextLabel;
    NSArray *_activeConstraints;
    NSView *_anchorView;
}

@property (retain, nonatomic) NSView *anchorView;
@property (copy, nonatomic) NSString *text;

- (void)updateLayer;
- (void)updateConstraints;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_mainWindowDidChange:(id)a0;

@end
