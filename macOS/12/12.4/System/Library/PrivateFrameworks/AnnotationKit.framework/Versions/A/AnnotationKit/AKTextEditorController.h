@class AKController, NSView, NSString, AKAnnotation, CALayer, NSTextView, NSTextStorage, AKPageController, NSUndoManager;
@protocol AKTextAnnotationProtocol;

@interface AKTextEditorController : NSObject <NSTextStorageDelegate, NSTextViewDelegate>

@property (weak) AKController *controller;
@property (weak) AKPageController *pageController;
@property (weak) AKAnnotation<AKTextAnnotationProtocol> *annotation;
@property (retain) NSTextView *textView;
@property (retain) CALayer *textViewMaskLayer;
@property (retain) NSView *textViewContainer;
@property (retain) NSTextStorage *textStorage;
@property double renderingTextStorageScaleFactor;
@property double modelToEditorScaleFactor;
@property double handleCompensatingScaleFactor;
@property (retain) NSUndoManager *textViewUndoManager;
@property BOOL isInEndEditing;
@property BOOL isInAdjustAnnotationFrameToFitText;
@property (readonly, nonatomic) BOOL isEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)endEditing;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)textDidChange:(id)a0;
- (void)textViewDidChangeTypingAttributes:(id)a0;
- (id)undoManagerForTextView:(id)a0;
- (void)_endEditing;
- (void)_performBlockOnMainThread:(id /* block */)a0;
- (void)beginEditingAnnotation:(id)a0 withPageController:(id)a1 selectAllText:(BOOL)a2;
- (void)commitToModelWithoutEndingEditing;
- (void)updateForTextAttributeChange;
- (void)beginEditingAnnotation:(id)a0 withPageController:(id)a1 selectAllText:(BOOL)a2 withPencil:(BOOL)a3;
- (void)_beginEditingAnnotation:(id)a0 withPageController:(id)a1 selectAllText:(BOOL)a2 withPencil:(BOOL)a3;
- (void)_commitToModelWithoutEndingEditing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_editorFrameForTextBoundsInModel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_adjustEditorToFitAnnotation:(id)a0 withText:(id)a1;
- (void)_adjustAnnotationFrameToFitText;
- (void)_updateTextView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andOrientation:(long long)a2 additionalRotation:(double)a3;
- (id)_newScaledPaths:(id)a0 withScaleFactor:(double)a1 aboutCenter:(struct CGPoint { double x0; double x1; })a2;

@end
