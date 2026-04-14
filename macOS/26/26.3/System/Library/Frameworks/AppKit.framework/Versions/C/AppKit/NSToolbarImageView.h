@class NSLayoutConstraint;

@interface NSToolbarImageView : NSImageView {
    unsigned long long _controlSize;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    struct CGSize { double width; double height; } _cachedImageSize;
}

@property unsigned long long controlSize;

- (id)init;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)_controlHeight;
- (void)_updateSymbolHints;
- (BOOL)mouseDownCanMoveWindow;

@end
