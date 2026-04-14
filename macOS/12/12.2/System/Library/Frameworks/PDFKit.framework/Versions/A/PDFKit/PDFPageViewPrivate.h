@class PDFPageViewAnnotationController, NSImage, PDFAccessibilityEffectLayer, PDFPageLayerEffect, CALayer, NSMutableDictionary, PDFPage, NSMutableArray, NSObject, NSTextStorage, PDFRenderingProperties, PDFAnnotation;
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
    BOOL isDetachedView;
    NSMutableDictionary *toolTipTags;
}

- (void).cxx_destruct;

@end
