@class PHCollection, PHFetchResult;

@interface CNAvatarPickerPhotoAssetCollection : NSObject

@property (retain, nonatomic) PHCollection *collection;
@property (retain, nonatomic) PHFetchResult *subCollections;
@property (readonly, nonatomic) BOOL isCollectionList;
@property (readonly, nonatomic) long long subCollectionCount;

- (id)localizedTitle;
- (id)initWithCollection:(id)a0;
- (void).cxx_destruct;
- (long long)estimatedPhotosCount;
- (BOOL)matchesCollection:(id)a0;
- (id)subCollectionAtIndex:(long long)a0;

@end
