@interface WFiTunesProductContentItem : WFiTunesObjectContentItem

+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)ownedTypes;

- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)storeObject;
- (id)mediaTrackObject;

@end
