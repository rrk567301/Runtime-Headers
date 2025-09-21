@class NSGlassView, NSArray, NSView, NSColor;

@interface NSToolbarPlatterView : NSView {
    NSGlassView *_glassView;
    NSArray *_containedItems;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetFrame;
    long long _originAnimationCount;
    long long _sizeAnimationCount;
    unsigned char _wantsOriginAnimation : 1;
    unsigned char _wantsSizeAnimation : 1;
    unsigned char _animationsEnabled : 1;
    unsigned char _inPaletteView : 1;
}

@property (readonly, retain) NSView *contentView;
@property (copy) NSArray *containedItems;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } targetFrame;
@property (copy) NSColor *tintColor;
@property long long variant;
@property long long subduedState;
@property (getter=isInPaletteView) BOOL inPaletteView;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (void)animateTheSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)animatingOrigin;
- (void)animateTheOrigin:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)animatingSize;
- (void)decrementOriginAnimationCount;
- (void)decrementSizeAnimationCount;
- (void)disableAnimations;
- (void)enableAnimations;
- (void)incrementOriginAnimationCount;
- (void)incrementSizeAnimationCount;

@end
