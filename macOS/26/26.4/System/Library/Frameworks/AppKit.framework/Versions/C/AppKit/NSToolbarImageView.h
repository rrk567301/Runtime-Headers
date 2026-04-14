@class NSLayoutConstraint;

@interface NSToolbarImageView : NSImageView {
    unsigned long long _controlSize;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    struct CGSize { double width; double height; } _cachedImageSize;
}

@property unsigned long long controlSize;

- (void)updateConstraints;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void)dealloc;
- (double)_controlHeight;
- (void)_updateSymbolHints;
- (BOOL)mouseDownCanMoveWindow;

@end
