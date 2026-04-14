@class NSPathComponentCell;

@interface NSAccessibilityPathComponent : NSAccessibilityIndexedMockUIElement {
    NSPathComponentCell *_pathComponentCell;
}

+ (id)pathComponentWithPathComponentCell:(id)a0 index:(long long)a1 parent:(id)a2;

- (void)dealloc;
- (id)accessibilityAttributeNames;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)pathComponentCell;
- (id)accessibilityURLAttribute;
- (BOOL)accessibilityIsURLAttributeSettable;
- (id)initWithPathComponentCell:(id)a0 index:(long long)a1 parent:(id)a2;

@end
