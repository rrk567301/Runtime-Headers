@interface KNSlideNumberPlaceholderInfo : KNPlaceholderInfo

+ (BOOL)wantsTitleAndCaptionUUIDs;

- (int)kind;
- (BOOL)isSelectable;
- (id)typeName;
- (void)acceptVisitor:(id)a0;
- (Class)layoutClass;
- (Class)repClass;
- (id)textureDeliveryStylesLocalized:(BOOL)a0 animationFilter:(id)a1;
- (id)instructionalText;
- (void)loadFromUnarchiver:(id)a0;
- (id)copyToInstantiateMasterPlaceholder;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;

@end
