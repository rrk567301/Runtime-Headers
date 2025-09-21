@class NSString, PLCloudFeedCommentsEntry, NSDate, NSNumber, PLManagedAsset;

@interface PLCloudSharedComment : PLManagedObject

@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSString *commenterHashedPersonID;
@property (retain, nonatomic) NSNumber *isDeletable;
@property (retain, nonatomic) NSNumber *isLike;
@property (retain, nonatomic) NSNumber *isCaption;
@property (retain, nonatomic) NSNumber *isBatchComment;
@property (retain, nonatomic) NSNumber *isMyComment;
@property (retain, nonatomic) NSString *commentText;
@property (retain, nonatomic) NSDate *commentDate;
@property (retain, nonatomic) NSDate *commentClientDate;
@property (retain, nonatomic) PLManagedAsset *commentedAsset;
@property (retain, nonatomic) PLManagedAsset *likedAsset;
@property (retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedCommentEntry;
@property (retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedLikeCommentEntry;
@property (readonly, nonatomic) char isLikeBoolValue;
@property (readonly, weak, nonatomic) NSString *commenterEmail;
@property (readonly, weak, nonatomic) NSString *commenterFirstName;
@property (readonly, weak, nonatomic) NSString *commenterLastName;
@property (readonly, weak, nonatomic) NSString *commenterFullName;
@property (readonly, weak, nonatomic) PLCloudFeedCommentsEntry *cloudFeedEntry;
@property (retain, nonatomic) NSString *commentType;

+ (id)entityName;
+ (id)insertNewCommentWithCommentText:(id)a0 commentDate:(id)a1 isLike:(char)a2 isMyComment:(char)a3 inLibrary:(id)a4;
+ (id)_cloudSharedCommentsWithPredicate:(id)a0 inManagedObjectContext:(id)a1;
+ (id)cloudSharedCommentWithGUID:(id)a0 inLibrary:(id)a1;
+ (id)cloudSharedCommentsWithCommentDate:(id)a0 inManagedObjectContext:(id)a1;
+ (id)cloudSharedCommentsWithGUIDs:(id)a0 inLibrary:(id)a1;
+ (id)insertNewCommentIntoAsset:(id)a0 commentDate:(id)a1 withText:(id)a2 isLike:(char)a3 isMyComment:(char)a4 inLibrary:(id)a5;

- (id)init;
- (id)asset;
- (void)awakeFromInsert;
- (void)willSave;
- (char)canBeDeletedByUser;
- (id)commenterDisplayName;
- (char)isInterestingForAlbumsSorting;
- (char)shouldNotifyAsNotificationWithMediaStreamInfo:(id)a0 asCaptionOnly:(char *)a1;
- (char)_isInterestingToUser;
- (char)matchesCommentText:(id)a0 isLike:(char)a1;
- (void)performDelete;

@end
