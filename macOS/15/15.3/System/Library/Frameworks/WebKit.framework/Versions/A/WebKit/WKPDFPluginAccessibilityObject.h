@class PDFLayerController;

@interface WKPDFPluginAccessibilityObject : NSObject {
    PDFLayerController *_pdfLayerController;
    struct WeakObjCPtr<NSObject> { id m_weakReference; } _parent;
}

@property PDFLayerController *pdfLayerController;
@property void *pdfPlugin;
@property struct WeakPtr<WebCore::HTMLPlugInElement, WebCore::WeakPtrImplWithEventTargetData, WTF::RawPtrTraits<WebCore::WeakPtrImplWithEventTargetData>> { struct RefPtr<WebCore::WeakPtrImplWithEventTargetData, WTF::RawPtrTraits<WebCore::WeakPtrImplWithEventTargetData>, WTF::DefaultRefDerefTraits<WebCore::WeakPtrImplWithEventTargetData>> { struct WeakPtrImplWithEventTargetData *m_ptr; } m_impl; } pluginElement;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)parent;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityAttributeValue:(id)a0 forParameter:(id)a1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParameterizedAttributeNames;
- (void)accessibilityPerformAction:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (void)setParent:(id)a0;
- (id)accessibilityAssociatedControlForAnnotation:(id)a0;
- (id)accessibilityHitTestIntPoint:(const struct IntPoint { int x0; int x1; } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToScreenSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithPDFPlugin:(void *)a0 andElement:(void *)a1;

@end
