@class NSButton, NSMutableArray, UXView;

@interface KHThemeDetailContainerView : UXView {
    NSMutableArray *_selfConstraints;
}

@property (readonly, nonatomic) UXView *contentView;
@property (readonly, nonatomic) NSButton *closeButton;
@property (readonly, nonatomic) NSButton *similarThemesButton;

- (void)commonInit;
- (void)updateConstraints;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
