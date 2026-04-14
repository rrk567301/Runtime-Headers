@class NSPathComponentCell;

@interface NSAccessibilityPathComponent : NSAccessibilityIndexedMockUIElement {
    NSPathComponentCell *_pathComponentCell;
}

+ (id)pathComponentWithPathComponentCell:(id)a0 index:(long long)a1 parent:(id)a2;

- (void)dealloc;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (BOOL)accessibilityIsURLAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityURLAttribute;
- (id)accessibilityValueAttribute;
- (id)initWithPathComponentCell:(id)a0 index:(long long)a1 parent:(id)a2;
- (id)pathComponentCell;

@end
