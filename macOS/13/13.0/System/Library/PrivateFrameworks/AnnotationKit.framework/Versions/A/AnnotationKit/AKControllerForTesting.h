@class NSView, AKLegacyDoodleController, AKAttributeController, AKActionController, AKModelController, AKUndoController, AKMainEventHandler, AKCursorController_Mac, AKToolController, AKSignatureModelController;
@protocol AKControllerDelegateProtocol;

@interface AKControllerForTesting : AKController

@property (retain) id<AKControllerDelegateProtocol> testingDelegate;
@property (retain) AKModelController *testingModelController;
@property (retain) AKActionController *testingActionController;
@property (retain) AKToolController *testingToolController;
@property (retain) AKAttributeController *testingAttributeController;
@property (retain) AKUndoController *testingUndoController;
@property (retain) AKMainEventHandler *testingMainEventHandler;
@property (retain) NSView *testingToolbarView;
@property (retain) NSView *testingOverlayView;
@property (retain) AKLegacyDoodleController *testingIntelligentSketchController;
@property (retain) AKSignatureModelController *testingSignatureModelController;
@property (retain) AKCursorController_Mac *testingCursorController;

+ (void)renderAnnotation:(id)a0 inContext:(struct CGContext { } *)a1;

- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (id)overlayView;
- (id)toolbarView;
- (void)updateOverlayViewAtIndex:(unsigned long long)a0;
- (void)setOverlayShouldPixelate:(BOOL)a0;
- (id)modelController;
- (BOOL)validateSender:(id)a0;
- (void)performActionForSender:(id)a0;
- (id)undoController;
- (void)reloadVisibleToolbarItemIdentifiers;
- (id)actionController;
- (id)toolController;
- (id)attributeController;
- (id)mainEventHandler;
- (id)legacyDoodleController;
- (id)signatureModelController;
- (id)cursorController;

@end
