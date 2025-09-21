@class NSString;

@interface ULPhotoFeaturesStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULPhotoFeaturesDO, std::allocator<ULPhotoFeaturesDO>> { struct ULPhotoFeaturesDO *x0; struct ULPhotoFeaturesDO *x1; struct ULPhotoFeaturesDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;

@end
