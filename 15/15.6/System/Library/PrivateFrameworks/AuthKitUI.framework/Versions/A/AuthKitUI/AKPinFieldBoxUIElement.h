@class AKPinFieldView;

@interface AKPinFieldBoxUIElement : NSObject {
    int _index;
    AKPinFieldView *_parent;
}

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsIgnored;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (char)accessibilityShouldUseUniqueId;
- (id)initWithIndex:(int)a0 parent:(id)a1;
- (id)axValue;
- (id)axPosition;
- (id)axSize;

@end
