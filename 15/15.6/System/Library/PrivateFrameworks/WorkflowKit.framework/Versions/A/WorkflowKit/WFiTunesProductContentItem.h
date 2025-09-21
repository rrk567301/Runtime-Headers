@interface WFiTunesProductContentItem : WFiTunesObjectContentItem

+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;

- (char)getListAltText:(id /* block */)a0;
- (char)getListSubtitle:(id /* block */)a0;
- (char)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (char)loadsListThumbnailAsynchronously;
- (id)mediaTrackObject;
- (id)storeObject;

@end
