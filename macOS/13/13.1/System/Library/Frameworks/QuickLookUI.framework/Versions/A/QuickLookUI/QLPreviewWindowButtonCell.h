@interface QLPreviewWindowButtonCell : NSButtonCell

+ (id)accessibilityIdentifier;
+ (id)buttonImage;
+ (id)buttonRolloverImage;
+ (id)buttonAlternateImage;
+ (SEL)buttonSelector;

- (BOOL)acceptsFirstResponder;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (id)accessibilityEditedAttribute;

@end
