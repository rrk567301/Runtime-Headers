@class NSLayoutConstraint;

@interface NSToolbarImageView : NSImageView {
    unsigned long long _controlSize;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    struct CGSize { double width; double height; } _cachedImageSize;
}

@property unsigned long long controlSize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (double)_controlHeight;
- (void)_updateSymbolHints;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (char)mouseDownCanMoveWindow;
- (void)updateConstraints;

@end
