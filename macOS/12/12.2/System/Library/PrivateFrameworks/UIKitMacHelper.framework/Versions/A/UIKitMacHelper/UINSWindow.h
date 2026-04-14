@class NSArray, UINSSceneWindowController;

@interface UINSWindow : NSWindow

@property (readonly) UINSSceneWindowController *sceneWindowController;
@property (readonly, nonatomic) NSArray *_contextIdsForHitTesting;
@property (nonatomic, setter=_setIgnoreConstrainFrameToScreen:) BOOL _ignoreConstrainFrameToScreen;

+ (struct CGSize { double x0; double x1; })_sceneSizeFromAutosaveName:(id)a0 defaultSize:(struct CGSize { double x0; double x1; })a1;
+ (id)keyPathsForValuesAffectingContentLayoutGuide;

- (id)description;
- (id)_implicitTabbingIdentifier;
- (void)newWindowForTab:(id)a0;
- (void)toggleFullScreen:(id)a0;
- (void)setWindowController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (BOOL)_wantsFullScreenCleanupOnOrderOut;
- (BOOL)isMovableByWindowBackground;
- (id)_layerHostedContext;
- (void)_setFirstResponder:(id)a0;
- (id)_contextForLayerHosting;
- (id)_responderChainFromFirstResponder;
- (id)_supplementalSharingServicePickerToolbarItemDelegate;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_layerTransformToHost;
- (BOOL)_contextIDRemoteStatusChangeShouldAffectWindow:(unsigned int)a0;
- (void)setInitialSceneContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)uiWindows;
- (void)_setContentMinSizeFromScene;
- (id)_hostedServiceUIWindowContext;
- (double)_sceneToSceneViewScaleFactor;

@end
