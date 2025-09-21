@class NSString, NSArray, NSKnownKeysDictionary, PHPhotoLibrary, NSManagedObjectID;

@interface PHThumbnailAsset : NSObject <_PLThumbnailLoadingAsset, PHThumbnailAsset, PHBatchFetchedPropertySet> {
    NSKnownKeysDictionary *_dictionary;
}

@property (class, readonly, copy, nonatomic) NSString *entityName;
@property (class, readonly, nonatomic) NSArray *propertiesToFetch;
@property (class, readonly, nonatomic) NSString *fetchType;
@property (class, readonly, nonatomic) long long batchSize;
@property (class, readonly, nonatomic) long long cacheSize;
@property (class, readonly, nonatomic) BOOL useNoIndexSelf;
@property (class, readonly, nonatomic) BOOL useObjectFetchingContext;
@property (class, readonly, nonatomic) NSArray *propertiesToSortBy;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly, nonatomic) BOOL complete;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) long long compactSCSensitivityAnalysis;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)pl_photoLibrary;
- (long long)_persistedThumbnailIndex;
- (unsigned long long)effectiveThumbnailIndex;
- (BOOL)hasAllThumbs;
- (BOOL)hasMasterThumb;
- (BOOL)hasTableThumbs;
- (id)initWithObjectID:(id)a0 knownKeysDictionary:(id)a1 photoLibrary:(id)a2;
- (short)savedAssetType;

@end
