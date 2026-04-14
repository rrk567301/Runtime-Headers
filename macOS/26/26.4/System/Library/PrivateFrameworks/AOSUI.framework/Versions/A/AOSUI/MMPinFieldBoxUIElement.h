@class MMPinFieldView;

@interface MMPinFieldBoxUIElement : NSObject {
    int _index;
    MMPinFieldView *_parent;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)dealloc;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)initWithIndex:(int)a0 parent:(id)a1;
- (id)axValue;
- (id)axPosition;
- (id)axSize;

@end
