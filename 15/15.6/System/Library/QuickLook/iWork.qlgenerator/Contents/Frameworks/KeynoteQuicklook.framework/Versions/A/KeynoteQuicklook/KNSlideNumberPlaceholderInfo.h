@interface KNSlideNumberPlaceholderInfo : KNPlaceholderInfo

+ (char)wantsTitleAndCaptionUUIDs;

- (int)kind;
- (char)isSelectable;
- (id)typeName;
- (void)acceptVisitor:(id)a0;
- (Class)layoutClass;
- (Class)repClass;
- (id)instructionalText;
- (id)textureDeliveryStylesLocalized:(char)a0 animationFilter:(id)a1;
- (char)allowsCaption;
- (char)allowsTitle;
- (id)copyToInstantiateTemplatePlaceholder;
- (void)loadFromUnarchiver:(id)a0;

@end
