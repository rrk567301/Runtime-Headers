@class NSString, DDActionContext;
@protocol QLPreviewItem;

@interface DDPreviewMenuItem : QLPreviewMenuItem <QLPreviewMenuItemDelegate> {
    BOOL _vkAutoTargetHack;
    BOOL _beingDisplayed;
    DDActionContext *_context;
    id<QLPreviewItem> _ddPreviewItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_cancelPredeepAnimation;
- (void)_releaseDeepAnimation;
- (id)menuItem:(id)a0 viewAtScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)menuItem:(id)a0 previewItemAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })menuItem:(id)a0 aimPointForPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuItem:(id)a0 itemFrameForPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })menuItem:(id)a0 maxSizeForPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)menuItemWillAppear:(id)a0;
- (void)menuItemDidClose:(id)a0;
- (id)urlStringWithTrackingIdentifier:(id)a0 company:(id)a1;
- (id)initForResult:(struct __DDResult { } *)a0 textCheckingResult:(id)a1 URL:(id)a2 uiReady:(BOOL)a3 context:(id)a4;
- (void)finalizeUI;

@end
