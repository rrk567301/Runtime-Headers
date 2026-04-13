@class ToolbarDownloadsButtonProgressBar;

@interface ToolbarDownloadsButton : ToolbarButtonPlus {
    float _lastUpdatedProgress;
    ToolbarDownloadsButtonProgressBar *_progressBar;
}

+ (Class)cellClass;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (void)viewDidMoveToSuperview;
- (void)_commonInit;
- (void)updateWithProgress:(float)a0;
- (void)_accessibilityDisplayOptionsDidChange;

@end
