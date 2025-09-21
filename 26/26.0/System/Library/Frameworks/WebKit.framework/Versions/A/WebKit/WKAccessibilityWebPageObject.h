@class NSArray;

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase {
    struct RetainPtr<NSArray> { NSArray *m_ptr; } m_attributeNames;
    struct RetainPtr<NSArray> { NSArray *m_ptr; } m_parameterizedAttributeNames;
}

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityAttributeValue:(id)a0 forParameter:(id)a1;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParameterizedAttributeNames;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityAttributeSizeValue;
- (struct RetainPtr<id> { id x0; })accessibilityAttributeParentValue;
- (id)accessibilityAttributePositionValue;
- (struct RetainPtr<id> { id x0; })accessibilityAttributeTopLevelUIElementValue;
- (struct RetainPtr<id> { id x0; })accessibilityAttributeWindowValue;
- (id)accessibilityDataDetectorValue:(id)a0 point:(struct FloatPoint { float x0; float x1; } *)a1;
- (struct CGPoint { double x0; double x1; })convertScreenPointToRootView:(struct CGPoint { double x0; double x1; })a0;
- (void)setWebPage:(struct NakedPtr<WebKit::WebPage> { struct WebPage *x0; })a0;

@end
