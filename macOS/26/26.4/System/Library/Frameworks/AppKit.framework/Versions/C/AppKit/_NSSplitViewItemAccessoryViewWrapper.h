@class NSArray, NSString, NSBannerView;
@protocol NSSplitViewItemAccessoryViewWrapperDelegate;

@interface _NSSplitViewItemAccessoryViewWrapper : NSView <NSSplitViewItemAccessoryView> {
    NSBannerView *_bannerView;
    NSArray *_accessoryControllers;
    unsigned long long _placement;
    unsigned char _alignmentSatisfied : 1;
}

@property (weak) id<NSSplitViewItemAccessoryViewWrapperDelegate> delegate;
@property (copy) NSArray *accessoryControllers;
@property unsigned long long placement;
@property BOOL alignmentSatisfied;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (long long)_scrollPocketElementStyle;
- (void)_updateSemanticContextAndGroup;
- (void)_updateSeparatorState;
- (void)clearClipViews;
- (id)declaredLayoutConstraints;
- (void)effectiveAppearanceDidChange;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
