@class SCTCarbonMenu;

@interface SCTMenuItemGRL : SCTGRL {
    SCTCarbonMenu *mCarbonMenu;
    struct OpaqueEventHandlerRef { } *mMenuHideEventHandler;
    struct OpaqueEventHandlerRef { } *mGetFramesBoundsHandler;
}

- (void)dealloc;
- (id)title;
- (void)hide:(id)a0;
- (unsigned long long)imageScaling;
- (void)perform;
- (void)show;
- (id)localizedCategory;
- (id)representativeIconForSelectedState:(BOOL)a0;
- (BOOL)imageWantsNonVibrantAppearance;
- (id)fullTitle;
- (void)resolveResourceAndInvoke:(id)a0;
- (id)resolveFromContainer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectForResource;
- (id)titleComponentAtIndex:(unsigned long long)a0;
- (BOOL)isValidTitleString:(id)a0 forIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemBoundsInScreenCoordinatesForItem:(struct OpaqueMenuRef { } *)a0 itemIndex:(unsigned short)a1;
- (id)initWithCarbonMenu:(id)a0;
- (void)showcaseMenuItem:(struct OpaqueMenuRef { } *)a0 itemIndex:(unsigned short)a1;
- (void)notifyPerform:(id)a0;
- (void)enableMenuFramesBoundsHandler:(struct OpaqueEventHandlerRef **)a0 forMenuRef:(struct OpaqueMenuRef { } *)a1;
- (void)disableMenuFrameBoundsHandler:(struct OpaqueEventHandlerRef **)a0;
- (void)removeMenuGRLEventHandler;
- (void)removeMenuGRLHideEventHandler;

@end
