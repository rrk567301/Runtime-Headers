@class PHCollection, PHFetchResult;

@interface CNAvatarPickerPhotoAssetCollection : NSObject

@property (retain, nonatomic) PHCollection *collection;
@property (retain, nonatomic) PHFetchResult *subCollections;
@property (readonly, nonatomic) BOOL isCollectionList;
@property (readonly, nonatomic) long long subCollectionCount;

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (id)localizedTitle;
- (long long)estimatedPhotosCount;
- (id)subCollectionAtIndex:(long long)a0;
- (BOOL)matchesCollection:(id)a0;

@end
