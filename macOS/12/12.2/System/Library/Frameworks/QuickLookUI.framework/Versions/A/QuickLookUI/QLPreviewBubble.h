@class QLPreviewBubbleReserved, NSArray, NSImage, NSString, NSWindow;
@protocol QLPreviewBubbleDelegate, QLPreviewItem;

@interface QLPreviewBubble : NSObject <QLSeamlessOpenerDelegate> {
    QLPreviewBubbleReserved *_reserved;
}

@property id<QLPreviewBubbleDelegate> delegate;
@property long long level;
@property struct CGPoint { double x0; double x1; } aimPoint;
@property double maxArea;
@property int animationType;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } animationSourceFrame;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } animationContentFrame;
@property BOOL autoplays;
@property BOOL forcePreferredEdge;
@property (readonly) unsigned long long usedEdge;
@property (readonly) unsigned int bubbleWindowID;
@property (copy) NSArray *runLoopModes;
@property (retain) NSArray *preloadedItems;
@property (copy) NSArray *controls;
@property (readonly, copy) NSImage *contentSnapshot;
@property BOOL skipAnimationInvoke;
@property BOOL skipAlphaDuringOpenAnimation;
@property struct CGSize { double x0; double x1; } maximumSize;
@property unsigned long long preferredEdge;
@property (retain) NSWindow *parentWindow;
@property (getter=isVisible) BOOL visible;
@property (retain) id<QLPreviewItem> previewItem;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } itemFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentBubbleForItem:(id)a0 parentWindow:(id)a1 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maximumSize:(struct CGSize { double x0; double x1; })a3 preferredEdge:(unsigned long long)a4;
+ (void)setGlobalSeamlesslyOpening:(BOOL)a0;
+ (void)presentBubbleForItem:(id)a0 parentWindow:(id)a1 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maximumSize:(struct CGSize { double x0; double x1; })a3 preferredEdge:(unsigned long long)a4 filterMask:(unsigned long long)a5 autocloseMask:(unsigned long long)a6;

- (void)dealloc;
- (id)init;
- (void)close;
- (void)hide:(id)a0;
- (id)seamlessOpener:(id)a0 sourceBubbleForPreviewItem:(id)a1;
- (void)show:(id)a0;
- (void)_windowWillClose;
- (id)_launchURL;
- (void)_didLoad;
- (struct __QLPreviewBubble { } *)bubbleRef;
- (id /* block */)bubbleDidCloseCompletionBlock;
- (void)setAutomaticallyCloseWithMask:(unsigned long long)a0 filterMask:(unsigned long long)a1 block:(id /* block */)a2;
- (void)showPreviewItem:(id)a0 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_deactivateEventMonitor;
- (void)_activateEventMonitor;
- (BOOL)isSeamlesslyOpening;
- (id)effectiveControls;
- (void)_seamlesslyOpenWithURL:(id)a0;
- (void)_updateModesIfNecessary;
- (void)_doubleClickEvent:(id)a0;
- (void)_buttonClickEvent:(id)a0;
- (void)_willOpenURLEvent:(id)a0;
- (void)_updateBubbleShow:(BOOL)a0;
- (id)_bubbleOptions;
- (void)_makeQueueIfNecessary;
- (void)makeBubble;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_itemFrameOnScreen;
- (BOOL)_animateShow;
- (void)_windowDidMove;
- (void)_windowWillMiniaturize;
- (void)_applicationWillDeactivate;
- (void)_breakWithParentWindow;
- (void)_linkWithParentWindow;
- (BOOL)_animateHide;
- (void)_checkSeamlesslyOpening;
- (void)setBubbleDidCloseCompletionBlock:(id /* block */)a0;
- (void)setDisplayPath:(id)a0 additionalString:(id)a1;
- (void)setSeamlesslyOpening:(BOOL)a0;

@end
