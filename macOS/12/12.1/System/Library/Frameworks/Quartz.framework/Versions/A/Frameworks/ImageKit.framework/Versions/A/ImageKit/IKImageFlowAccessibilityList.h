@class IKImageFlowView;

@interface IKImageFlowAccessibilityList : NSObject {
    IKImageFlowView *_flowView;
}

- (void)dealloc;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned int)accessibilityArrayAttributeCount:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (unsigned int)accessibilityIndexOfChild:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilitySelectedChildren;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityItemForCell:(id)a0 atIndex:(unsigned long long)a1 inFlowView:(id)a2;
- (id)initWithFlowView:(id)a0;

@end
