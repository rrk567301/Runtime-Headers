@class NSArray, NSString, NSBannerView;
@protocol NSSplitViewItemAccessoryViewWrapperDelegate;

@interface _NSSplitViewItemAccessoryViewWrapper : NSView <NSSplitViewItemAccessoryViewInternal> {
    NSBannerView *_bannerView;
    NSArray *_accessoryControllers;
    unsigned long long _placement;
    unsigned char _alignmentSatisfied : 1;
}

@property (weak) id<NSSplitViewItemAccessoryViewWrapperDelegate> delegate;
@property (copy) NSArray *accessoryControllers;
@property unsigned long long placement;
@property BOOL alignmentSatisfied;
@property (readonly) BOOL supportsSoftPocket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateBannerViewForPocketStyle;
- (void)_addBannerView;
- (void)_removeBannerView;
- (long long)_scrollPocketElementStyle;
- (void)_updateSemanticContextAndGroup;
- (void)_updateSeparatorState;
- (void)clearClipViews;
- (id)declaredLayoutConstraints;
- (void)effectiveAppearanceDidChange;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
