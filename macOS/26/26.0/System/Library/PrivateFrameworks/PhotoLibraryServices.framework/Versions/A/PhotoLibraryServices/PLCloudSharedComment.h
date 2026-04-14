@class PLShareParticipant, NSString, PLCloudFeedCommentsEntry, PLCollectionShare, NSDate, NSNumber, PLManagedAsset;

@interface PLCloudSharedComment : PLManagedObject <PLCloudDeletable>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSDate *commentDate;
@property (retain, nonatomic) NSString *commenterHashedPersonID;
@property (retain, nonatomic) NSNumber *isDeletable;
@property (retain, nonatomic) NSNumber *isLike;
@property (retain, nonatomic) NSNumber *isCaption;
@property (retain, nonatomic) NSNumber *isBatchComment;
@property (retain, nonatomic) NSNumber *isMyComment;
@property (retain, nonatomic) NSString *commentText;
@property (retain, nonatomic) NSDate *commentClientDate;
@property (retain, nonatomic) PLManagedAsset *commentedAsset;
@property (retain, nonatomic) PLManagedAsset *likedAsset;
@property (retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedCommentEntry;
@property (retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedLikeCommentEntry;
@property (retain, nonatomic) PLShareParticipant *shareParticipant;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (readonly, nonatomic) NSString *commenterEmail;
@property (readonly, nonatomic) NSString *commenterFirstName;
@property (readonly, nonatomic) NSString *commenterLastName;
@property (readonly, nonatomic) NSString *commenterFullName;
@property (readonly, nonatomic) BOOL isLikeBoolValue;
@property (readonly, nonatomic) PLCollectionShare *collectionShare;
@property (readonly, nonatomic) PLCloudFeedCommentsEntry *cloudFeedEntry;
@property (retain, nonatomic) NSString *commentType;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (id)_syncablePredicate;
+ (id)insertNewCommentWithCommentText:(id)a0 commentDate:(id)a1 isLike:(BOOL)a2 isMyComment:(BOOL)a3 inLibrary:(id)a4;
+ (id)cloudSharedCommentWithGUID:(id)a0 inLibrary:(id)a1;
+ (id)cloudSharedCommentsWithCommentDate:(id)a0 inManagedObjectContext:(id)a1;
+ (id)cloudSharedCommentsWithGUIDs:(id)a0 inLibrary:(id)a1;
+ (id)commentsMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(long long)a2 inManagedObjectContext:(id)a3;
+ (id)commentsToUploadInManagedObjectContext:(id)a0 limit:(long long)a1;
+ (id)insertNewCommentIntoAsset:(id)a0 commentDate:(id)a1 withText:(id)a2 isLike:(BOOL)a3 isMyComment:(BOOL)a4 inLibrary:(id)a5;

- (void)willSave;
- (id)scopedIdentifier;
- (void)performDelete;
- (BOOL)validateForUpdate:(id *)a0;
- (id)scopeIdentifier;
- (id)cplFullRecord;
- (void)awakeFromInsert;
- (BOOL)isSyncableChange;
- (id)init;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)supportsCloudUpload;
- (id)asset;
- (void)prepareForDeletion;
- (BOOL)canBeDeletedByUser;
- (BOOL)isInterestingForAlbumsSorting;
- (BOOL)_isInterestingToUser;
- (BOOL)_relationshipsInInvalidState;
- (BOOL)_validateRelationshipConstraintForInsert:(BOOL)a0 error:(id *)a1;
- (id)commenterDisplayName;
- (id)cplCommentChange;
- (BOOL)matchesCommentText:(id)a0 isLike:(BOOL)a1;
- (BOOL)shouldNotifyAsNotificationWithMediaStreamInfo:(id)a0 asCaptionOnly:(BOOL *)a1;
- (BOOL)updateWithCPLCommentChange:(id)a0 inPhotoLibrary:(id)a1;

@end
