@class ToolbarDownloadsButtonProgressBar;

@interface ToolbarDownloadsButton : ToolbarButtonPlus {
    float _lastUpdatedProgress;
    ToolbarDownloadsButtonProgressBar *_progressBar;
}

+ (Class)cellClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)_commonInit;
- (id)accessibilityIdentifier;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToSuperview;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (void)updateWithProgress:(float)a0;
- (void)_accessibilityDisplayOptionsDidChange;

@end
