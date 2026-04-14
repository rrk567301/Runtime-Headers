@class NSString, NSImage, NSColor;

@interface NSColoredPencil : NSObject

@property (readonly, copy) NSString *name;
@property (readonly) NSImage *image;
@property (readonly, copy) NSColor *color;

- (void)dealloc;
- (id)debugDescription;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (id)accessibilityRoleDescriptionAttribute;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
- (id)accessibilityParentAttribute;
- (BOOL)accessibilityIsParentAttributeSettable;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityPositionAttribute;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (id)accessibilitySizeAttribute;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)setOwningPencilView:(id)a0;
- (id)initWithName:(id)a0 color:(id)a1 image:(id)a2;
- (id)owningPencilView;

@end
