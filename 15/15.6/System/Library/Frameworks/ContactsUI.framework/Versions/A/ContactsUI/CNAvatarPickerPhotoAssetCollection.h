@class PHCollection, PHFetchResult;

@interface CNAvatarPickerPhotoAssetCollection : NSObject

@property (retain, nonatomic) PHCollection *collection;
@property (retain, nonatomic) PHFetchResult *subCollections;
@property (readonly, nonatomic) char isCollectionList;
@property (readonly, nonatomic) long long subCollectionCount;

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (id)localizedTitle;
- (long long)estimatedPhotosCount;
- (char)matchesCollection:(id)a0;
- (id)subCollectionAtIndex:(long long)a0;

@end
