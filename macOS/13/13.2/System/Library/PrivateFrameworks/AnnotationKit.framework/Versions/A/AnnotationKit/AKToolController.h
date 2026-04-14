@class AKController;

@interface AKToolController : NSObject

@property (weak) AKController *controller;
@property (nonatomic) BOOL allInkEnabled;
@property (nonatomic) BOOL pencilInkEnabled;
@property BOOL suppressSuggestedTouchBarChange;
@property (readonly, nonatomic) BOOL isInDefaultMode;
@property (nonatomic) unsigned long long toolMode;

+ (void)cascadeAnnotations:(id)a0 onPageController:(id)a1 forPaste:(BOOL)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (BOOL)isOptionKeyPressed;
- (void)performToolActionForSender:(id)a0;
- (id)createAnnotationOfType:(long long)a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)addNewAnnotation:(id)a0 onPageController:(id)a1 shouldSelect:(BOOL)a2 shouldCascade:(BOOL)a3;
- (BOOL)isToolSenderEnabled:(id)a0;
- (void)updateToolSenderState:(id)a0 enabled:(BOOL)a1;
- (void)resetToDefaultMode;
- (unsigned long long)defaultToolMode;
- (double)_modelBaseScaleFactorForNewAnnotation;
- (double)_strokeWidthForNewAnnotation;
- (id)_strokeColorForNewAnnotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })_defaultCenterForNewAnnotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultRectangleForNewAnnotation:(id)a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_validatedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fitsInVisibleRegionOfOverlayView:(id)a1 ownedByPageController:(id)a2 centeredAtPoint:(struct CGPoint { double x0; double x1; })a3;
- (id)_defaultTypingAttributes;
- (id)_defaultTextBoxTypingAttributes;
- (id)_defaultHeartTypingAttributesWithFillColor:(id)a0;
- (id)_defaultFillColorForAnnotationOfClass:(Class)a0;
- (void)_setRectangleToFitTextOnTextAnnotation:(id)a0;
- (unsigned long long)_arrowStyleForToolTag:(long long)a0;

@end
