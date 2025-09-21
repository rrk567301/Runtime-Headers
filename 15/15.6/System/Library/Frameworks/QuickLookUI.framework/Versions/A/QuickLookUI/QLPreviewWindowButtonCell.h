@interface QLPreviewWindowButtonCell : NSButtonCell

+ (id)accessibilityIdentifier;
+ (id)buttonImage;
+ (id)buttonAlternateImage;
+ (id)buttonRolloverImage;
+ (SEL)buttonSelector;

- (char)acceptsFirstResponder;
- (id)accessibilityAttributeNames;
- (id)accessibilityEditedAttribute;
- (char)accessibilityIsAttributeSettable:(id)a0;

@end
