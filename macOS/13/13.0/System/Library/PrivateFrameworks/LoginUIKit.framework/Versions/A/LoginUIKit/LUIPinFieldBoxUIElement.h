@class LUIPinFieldView;

@interface LUIPinFieldBoxUIElement : NSObject {
    int _index;
    LUIPinFieldView *_parent;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (id)accessibilityFocusedUIElement;
- (id)initWithIndex:(int)a0 parent:(id)a1;
- (id)axValue;
- (id)axPosition;
- (id)axSize;

@end
