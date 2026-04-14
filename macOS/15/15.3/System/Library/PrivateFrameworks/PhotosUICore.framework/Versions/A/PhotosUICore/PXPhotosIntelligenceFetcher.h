@interface PXPhotosIntelligenceFetcher : NSObject

+ (id)fetchFeaturedPhotoAssetsInPhotoLibrary:(id)a0 sharingFilter:(unsigned short)a1 currentlyFeaturedOnly:(BOOL)a2;
+ (id)fetchFeaturedPhotoSuggestionsInPhotoLibrary:(id)a0 sharingFilter:(unsigned short)a1 currentlyFeaturedOnly:(BOOL)a2;

@end
