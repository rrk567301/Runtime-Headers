@class ToolbarDownloadsButtonProgressBar;

@interface ToolbarDownloadsButton : ToolbarButtonPlus {
    float _lastUpdatedProgress;
    ToolbarDownloadsButtonProgressBar *_progressBar;
}

+ (Class)cellClass;

- (void)_commonInit;
- (void)layout;
- (void)viewDidMoveToSuperview;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (id)accessibilityChildren;
- (void)updateWithProgress:(float)a0;
- (void)_accessibilityDisplayOptionsDidChange;

@end
