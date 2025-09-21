@interface WFPodcastShowContentItem : WFiTunesObjectContentItem

+ (char)canLowercaseTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)ownedTypes;
+ (id)propertyBuilders;

- (char)getListSubtitle:(id /* block */)a0;
- (char)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (char)loadsListThumbnailAsynchronously;
- (id)podcastObject;

@end
