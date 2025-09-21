@class NSString;
@protocol VFXEditorViewDelegate;

@interface VFXEditorView : VFXView <VFXCameraNavigationControllerDelegate> {
    char _mouseDragged;
    void /* unknown type, empty encoding */ _mouseDownLocation;
    struct { void /* unknown type, empty encoding */ columns[4]; } _originalTransform;
    float _originalFocal;
    struct CGPoint { double x; double y; } _mouseUpLocation;
    long long _mouseClickCount;
}

@property (weak, nonatomic) id<VFXEditorViewDelegate> selectionDelegate;
@property (nonatomic) long long editingSpace;
@property (nonatomic) long long selectionTransformMode;
@property (nonatomic) char showsDebugUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)acceptsFirstMouse:(id)a0;
- (char)acceptsFirstResponder;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDragged:(id)a0;
- (char)performDragOperation:(id)a0;
- (char)handleKeyDown:(id)a0;
- (void)switchToNextCamera;
- (char)_isEditor;
- (void)didChangePointOfView;
- (void)focusNodes:(id)a0;
- (void)willChangePointOfView;
- (char)performMouseUp:(id)a0;
- (char)_handleKeyDownToSwitchCamera:(id)a0;
- (char)_isPoint:(SEL)a0 insideFrustumForView:(id)a1;
- (void /* unknown type, empty encoding */)_orbitAtPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1 globalBoundingSphere:(out struct **)a2;
- (struct { })_selectionBoundingSphere:(id)a0;
- (void /* unknown type, empty encoding */)autoplacementForNewObject;
- (void)editorViewDidStopInteraction:(id)a0;
- (void)editorViewWillStartInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (char)performMouseDown:(id)a0;
- (void /* unknown type, empty encoding */)simdConvertPointFromWindow:(struct CGPoint { double x0; double x1; })a0;

@end
