@class NSString, NSDate;

@interface PHAssetComment : PHObject

@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly, nonatomic) NSDate *commentClientDate;
@property (readonly, nonatomic) NSString *cloudGUID;
@property (readonly, nonatomic) NSString *commenterHashedPersonID;
@property (readonly, nonatomic) BOOL isInterestingToUser;
@property (readonly, nonatomic) BOOL isLike;
@property (readonly, nonatomic) BOOL isCaption;
@property (readonly, nonatomic) BOOL isBatchComment;
@property (readonly, nonatomic) BOOL isMyComment;
@property (readonly, nonatomic) NSString *commentText;
@property (readonly, nonatomic) NSDate *commentDate;
@property (readonly, nonatomic) BOOL isInterestingForAlbumsSorting;
@property (readonly, nonatomic) BOOL canBeDeletedByUser;

+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchCommentsForAsset:(id)a0 options:(id)a1;
+ (id)fetchCommentsForCloudFeedEntry:(id)a0 options:(id)a1;
+ (id)fetchCommentsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchLikesForAsset:(id)a0 options:(id)a1;
+ (id)fetchLikesForCloudFeedEntry:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (BOOL)_isInterestingToUser:(id)a0 cloudSharedProperties:(id)a1;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
