@class NSMutableDictionary, NSTextStorage, PDFTextSelectionBoundingBoxesEffectLayer, PDFPage, NSObject, PDFPageLayerEffect, NSMutableArray, CALayer, PDFRenderingProperties, NSImage, PDFHighlightDetectedFormFieldsEffectLayer, PDFAnnotation, PDFTextPreciseBoundingBoxesEffectLayer, PDFOCREffectLayer, PDFAccessibilityEffectLayer, PDFPageViewAnnotationController;
@protocol PDFPageLayerGeometryInterface, PDFPageLayerInterface;

@interface PDFPageViewPrivate : NSObject {
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    PDFPage *page;
    CALayer<PDFPageLayerInterface> *pageLayer;
    id scrollViewObservation;
    PDFPageLayerEffect *searchLayer;
    NSMutableArray *pageAnnotationEffects;
    PDFAnnotation *activeAnnotation;
    NSMutableDictionary *activeControls;
    NSTextStorage *activeTextStorage;
    NSMutableArray *pageSignatures;
    PDFPageViewAnnotationController *annotationController;
    CALayer *backgroundLayer;
    NSImage *backgroundImage;
    int backgroundQuality;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } backgroundImageLock;
    unsigned long long visibilityDelegateIndex;
    BOOL isPerformingUndo;
    CALayer *bookmarkLayer;
    struct CGSize { double width; double height; } bookmarkSize;
    PDFHighlightDetectedFormFieldsEffectLayer *detectedFormFieldBoundingBoxesLayer;
    PDFPageLayerEffect *pdfResultLayer;
    PDFPageLayerEffect *selectionLayer;
    PDFAccessibilityEffectLayer *accessibilityLayer;
    PDFTextPreciseBoundingBoxesEffectLayer *textPreciseBoundingBoxesLayer;
    PDFTextSelectionBoundingBoxesEffectLayer *textSelectionBoundingBoxesLayer;
    PDFOCREffectLayer *ocrEffectLayer;
    BOOL isDetachedView;
    BOOL hasDrawnTables;
    NSMutableDictionary *toolTipTags;
}

- (void).cxx_destruct;

@end
