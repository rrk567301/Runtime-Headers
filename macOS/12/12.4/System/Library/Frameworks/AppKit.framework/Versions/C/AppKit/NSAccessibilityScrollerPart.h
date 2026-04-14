@interface NSAccessibilityScrollerPart : NSAccessibilityMockUIElement {
    unsigned long long _partCode;
}

+ (id)partWithCode:(unsigned long long)a0 parent:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)accessibilityAttributeNames;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilitySetValueAttribute:(id)a0;
- (id)initWithPartCode:(unsigned long long)a0 parent:(id)a1;
- (unsigned long long)partCode;

@end
