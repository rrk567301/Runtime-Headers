@class NSButton, NSMutableArray, UXView;

@interface KHThemeDetailContainerView : UXView {
    NSMutableArray *_selfConstraints;
}

@property (readonly, nonatomic) UXView *contentView;
@property (readonly, nonatomic) NSButton *closeButton;
@property (readonly, nonatomic) NSButton *similarThemesButton;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;

@end
