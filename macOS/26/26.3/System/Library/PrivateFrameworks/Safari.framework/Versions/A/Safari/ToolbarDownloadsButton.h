@class ToolbarDownloadsButtonProgressBar;

@interface ToolbarDownloadsButton : ToolbarButtonPlus {
    float _lastUpdatedProgress;
    ToolbarDownloadsButtonProgressBar *_progressBar;
}

+ (Class)cellClass;

- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToSuperview;
- (id)accessibilityChildren;
- (void)updateWithProgress:(float)a0;
- (void)_accessibilityDisplayOptionsDidChange;

@end
