@class NSArray;

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase {
    struct RetainPtr<NSArray> { void *m_ptr; } m_attributeNames;
}

@property (retain, nonatomic) NSArray *cachedParameterizedAttributeNames;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityAttributeValue:(id)a0 forParameter:(id)a1;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityChildren;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (struct CGPoint { double x0; double x1; })convertScreenPointToRootView:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityAttributeSizeValue;
- (id)accessibilityAttributePositionValue;
- (id)accessibilityDataDetectorValue:(id)a0 point:(struct FloatPoint { float x0; float x1; } *)a1;

@end
