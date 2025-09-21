@class NSString, NSImage, NSColor;

@interface NSColoredPencil : NSObject

@property (readonly, copy) NSString *name;
@property (readonly) NSImage *image;
@property (readonly, copy) NSColor *color;

- (void)dealloc;
- (id)debugDescription;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityDescriptionAttribute;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsDescriptionAttributeSettable;
- (char)accessibilityIsIgnored;
- (char)accessibilityIsParentAttributeSettable;
- (char)accessibilityIsPositionAttributeSettable;
- (char)accessibilityIsRoleAttributeSettable;
- (char)accessibilityIsRoleDescriptionAttributeSettable;
- (char)accessibilityIsSizeAttributeSettable;
- (char)accessibilityIsTopLevelUIElementAttributeSettable;
- (char)accessibilityIsValueAttributeSettable;
- (char)accessibilityIsWindowAttributeSettable;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityPositionAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilitySizeAttribute;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityValueAttribute;
- (id)accessibilityWindowAttribute;
- (id)initWithName:(id)a0 color:(id)a1 image:(id)a2;
- (id)owningPencilView;
- (void)setOwningPencilView:(id)a0;

@end
