@class NSString, NSDate;

@interface PHAssetComment : PHObject

@property (readonly, nonatomic) char isDeletable;
@property (readonly, nonatomic) NSDate *commentClientDate;
@property (readonly, nonatomic) NSString *cloudGUID;
@property (readonly, nonatomic) NSString *commenterHashedPersonID;
@property (readonly, nonatomic) char isInterestingToUser;
@property (readonly, nonatomic) char isLike;
@property (readonly, nonatomic) char isCaption;
@property (readonly, nonatomic) char isBatchComment;
@property (readonly, nonatomic) char isMyComment;
@property (readonly, nonatomic) NSString *commentText;
@property (readonly, nonatomic) NSDate *commentDate;
@property (readonly, nonatomic) NSString *commenterEmail;
@property (readonly, nonatomic) NSString *commenterFirstName;
@property (readonly, nonatomic) NSString *commenterLastName;
@property (readonly, nonatomic) NSString *commenterFullName;
@property (readonly, nonatomic) char isInterestingForAlbumsSorting;
@property (readonly, nonatomic) NSString *commenterDisplayName;
@property (readonly, nonatomic) char canBeDeletedByUser;

+ (id)entityKeyMap;
+ (id)fetchCommentsForAsset:(id)a0 options:(id)a1;
+ (id)fetchLikesForAsset:(id)a0 options:(id)a1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;

- (void).cxx_destruct;
- (char)_isInterestingToUser:(id)a0 cloudSharedProperties:(id)a1;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (id)personInfoManager;
- (char)shouldNotifyAsNotificationWithMediaStreamInfo:(id)a0 asCaptionOnly:(char *)a1;

@end
