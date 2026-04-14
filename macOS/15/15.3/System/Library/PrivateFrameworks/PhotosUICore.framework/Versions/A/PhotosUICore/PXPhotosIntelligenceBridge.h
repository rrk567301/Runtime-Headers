@interface PXPhotosIntelligenceBridge : NSObject

+ (id)fetchFeaturedPhotoAssetsWithPhotoLibrary:(id)a0 sharingFilter:(unsigned short)a1 currentlyFeaturedOnly:(BOOL)a2;
+ (id)fetchFeaturedPhotoSuggestionsWithPhotoLibrary:(id)a0 sharingFilter:(unsigned short)a1 fetchLimit:(long long)a2 currentlyFeaturedOnly:(BOOL)a3;

- (id)init;

@end
