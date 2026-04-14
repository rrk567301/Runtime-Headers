@interface KNSlideNumberPlaceholderInfo : KNPlaceholderInfo

+ (BOOL)wantsTitleAndCaptionUUIDs;

- (id)typeName;
- (int)kind;
- (Class)layoutClass;
- (void)acceptVisitor:(id)a0;
- (BOOL)isSelectable;
- (Class)repClass;
- (id)instructionalText;
- (id)textureDeliveryStylesLocalized:(BOOL)a0 animationFilter:(id)a1;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (id)copyToInstantiateTemplatePlaceholder;
- (void)loadFromUnarchiver:(id)a0;

@end
