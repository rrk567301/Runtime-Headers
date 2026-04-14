@interface NSAccessibilityTextLink : NSAccessibilityMockUIElement {
    struct _NSRange { unsigned long long location; unsigned long long length; } _characterRange;
}

+ (id)linkWithCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 parent:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)accessibilityAttributeNames;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityTitleAttribute;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (id)initWithCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 parent:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRange;
- (id)accessibilityURLAttribute;
- (BOOL)accessibilityIsURLAttributeSettable;
- (id)_parentAttributedString;

@end
