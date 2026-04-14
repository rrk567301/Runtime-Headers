@class NSMutableDictionary, NSTextStorage, PDFPage, NSObject, PDFNodeBoundingBoxesEffectLayer, PDFPageLayerEffect, NSMutableArray, CALayer, PDFTextBoundingBoxesEffectLayer, NSImage, PDFRenderingProperties, PDFAnnotation, PDFAccessibilityEffectLayer, PDFPageViewAnnotationController;
@protocol PDFPageLayerGeometryInterface, PDFPageLayerInterface;

@interface PDFPageViewPrivate : NSObject {
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    PDFPage *page;
    CALayer<PDFPageLayerInterface> *pageLayer;
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
    unsigned long long visibilityDelegateIndex;
    BOOL isPerformingUndo;
    CALayer *bookmarkLayer;
    struct CGSize { double width; double height; } bookmarkSize;
    PDFPageLayerEffect *pdfResultLayer;
    PDFPageLayerEffect *selectionLayer;
    PDFAccessibilityEffectLayer *accessibilityLayer;
    PDFTextBoundingBoxesEffectLayer *textBoundingBoxesLayer;
    PDFNodeBoundingBoxesEffectLayer *nodeBoundingBoxesLayer;
    BOOL isDetachedView;
    NSMutableDictionary *toolTipTags;
}

- (void).cxx_destruct;

@end
