@class NSDictionary, PLManagedObject, NSObject;
@protocol PLAssetContainer, PLAlbumProtocol;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification {
    char _titleDidChange;
    char _keyAssetDidChange;
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) PLManagedObject *container;
@property (readonly, nonatomic) id<PLAssetContainer> assetContainer;
@property (readonly, nonatomic) NSObject<PLAlbumProtocol> *album;
@property (readonly, nonatomic) char titleDidChange;
@property (readonly, nonatomic) char keyAssetDidChange;

+ (id)notificationWithContainer:(id)a0 snapshot:(id)a1 changedAssets:(id)a2;

- (void)dealloc;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)userInfo;
- (void)_calculateDiffs;
- (id)_contentRelationshipName;
- (char)_getOldSet:(id *)a0 newSet:(id *)a1;
- (char)hasDeletes;

@end
