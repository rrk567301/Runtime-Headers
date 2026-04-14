@class AKController, PKInk, NSDictionary, AKPageModelController, NSFont, NSColor;

@interface AKAttributeController : NSObject

@property (weak) AKController *controller;
@property (retain, nonatomic) NSColor *strokeColor;
@property (retain) NSColor *fillColor;
@property (retain, nonatomic) PKInk *ink;
@property double strokeWidth;
@property BOOL strokeIsDashed;
@property BOOL hasShadow;
@property long long brushStyle;
@property unsigned long long arrowHeadStyle;
@property (retain) NSFont *font;
@property (retain) NSDictionary *textAttributes;
@property (retain, nonatomic) AKPageModelController *modelControllerToObserveForSelections;
@property (nonatomic) long long highlightStyle;

+ (void)initialize;
+ (id)defaultFont;
+ (id)defaultTextAttributes;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithController:(id)a0;
- (void)annotationEditingDidEndWithCompletion:(id /* block */)a0;
- (void)forceHideRuler;
- (void)toggleRuler;
- (void)performAttributeActionForSender:(id)a0 segment:(long long)a1;
- (BOOL)isAttributeSenderEnabled:(id)a0 segment:(long long)a1;
- (void)updateAttributeSenderState:(id)a0 segment:(long long)a1 enabled:(BOOL)a2;
- (BOOL)strokeColorIsEqualTo:(id)a0;
- (void)restoreStrokeColorToSystemDefault;
- (void)setDefaultInk;
- (void)resetToLastDrawingInk;
- (void)updateInkIfNeeded:(id)a0;
- (void)_updateInk;
- (void)_persistCurrentAttributes;
- (void)_restorePersistedAttributes;
- (void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)a0 segment:(long long)a1;
- (void)_syncAttributesFromSelectedAnnotationsToUI;
- (void)syncFillColorOnSelectionToUI;
- (void)syncStrokeColorOnSelectionToUI;
- (BOOL)_isEnabledForSender:(id)a0 segment:(long long)a1 withSelectedAnnotations:(id)a2;
- (void)_updateStateOnSender:(id)a0 segment:(long long)a1;
- (void)_allAnnotations:(id)a0 all:(BOOL *)a1 atLeastOneShare:(BOOL *)a2 attributeFromTag:(long long)a3;
- (long long)_allAnnotations:(id)a0 shareAttributeFromTag:(long long)a1;
- (BOOL)_updateStateOnSender:(id)a0 segment:(long long)a1 fromSelectedAnnotations:(id)a2;
- (void)_updateStateOnSenderFromSelf:(id)a0 segment:(long long)a1;

@end
