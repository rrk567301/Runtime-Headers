@class AKPinFieldView;

@interface AKPinFieldBoxUIElement : NSObject {
    int _index;
    AKPinFieldView *_parent;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (id)initWithIndex:(int)a0 parent:(id)a1;
- (id)axValue;
- (id)axPosition;
- (id)axSize;

@end
