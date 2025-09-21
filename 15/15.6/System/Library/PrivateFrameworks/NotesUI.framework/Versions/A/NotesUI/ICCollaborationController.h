@class ICCollaborationAnalyticsTracker, NSImage, ICSelectorDelayer, NSMutableDictionary;
@protocol ICCollaborationControllerDelegate, ICCollaborationAnalyticsDelegate;

@interface ICCollaborationController : NSObject

@property (class, readonly, nonatomic) ICCollaborationController *sharedInstance;
@property (class, readonly, nonatomic) NSImage *shareSheetNoteThumbnailImage;
@property (class, readonly, nonatomic) NSImage *shareSheetFolderThumbnailImage;

@property (retain, nonatomic) ICCollaborationAnalyticsTracker *collaborationAnalyticsTracker;
@property (readonly, nonatomic) ICSelectorDelayer *updateSharesDelayer;
@property (retain, nonatomic) NSMutableDictionary *ckShareIDToRootRecordID;
@property (weak, nonatomic) id<ICCollaborationControllerDelegate> collaborationControllerDelegate;
@property (weak, nonatomic) id<ICCollaborationAnalyticsDelegate> collaborationAnalyticsDelegate;

+ (void)didFailToUpdateShareWithError:(id)a0;
+ (void)genericShareErrorAlert:(id /* block */)a0;
+ (id)highlightColorForUserID:(id)a0 inNote:(id)a1 isDark:(char)a2;
+ (id)newShareForObject:(id)a0;
+ (void)postDidUpdateShareNotificationForObject:(id)a0;
+ (void)presentExportViewForAttachment:(id)a0 window:(id)a1;
+ (id)rootRecordForObject:(id)a0;
+ (void)saveActivityType:(id)a0 isCollaborationSelected:(char)a1 error:(id)a2 completed:(char)a3 forNote:(id)a4;
+ (id)serverShareCheckingParent:(id)a0 managedObjectContext:(id)a1;
+ (id)serverShareIfRootObject:(id)a0 managedObjectContext:(id)a1;
+ (long long)shareStatusOfFolder:(id)a0 objectsForMakingDecision:(id)a1;
+ (char)showCloudKitShareAcceptancePartialFailureAlertForError:(id)a0 alertBlock:(id /* block */)a1;
+ (void)showQuotaExceededAlertIfNeededWithRecordID:(id)a0 accountID:(id)a1;
+ (void)trackShare:(id)a0 forNote:(id)a1;
+ (id)updatedShareForObject:(id)a0 includeHierarchicalShare:(char)a1 managedObjectContext:(id)a2;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)viewContext;
- (id)backgroundContext;
- (void)managedObjectContextObjectsDidChange:(id)a0;
- (void)updateShares;
- (id)cloudContext;
- (id)containerForAccountID:(id)a0;
- (void)acceptShareWithMetadata:(id)a0 managedObjectContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)acceptShareWithMetadata:(id)a0 attemptNumber:(id)a1 container:(id)a2 accountID:(id)a3 fetchObjectWithCompletionHandler:(id /* block */)a4;
- (void)acceptShareWithMetadata:(id)a0 container:(id)a1 accountID:(id)a2 fetchObjectWithCompletionHandler:(id /* block */)a3;
- (id)containerForUserRecordID:(id)a0;
- (void)didSaveShare:(id)a0 accountID:(id)a1;
- (void)didStopSharing:(id)a0 recordID:(id)a1 accountID:(id)a2;
- (void)fetchAndAcceptShareMetadataWithURL:(id)a0 managedObjectContext:(id)a1 alertBlock:(id /* block */)a2 showObjectBlock:(id /* block */)a3;
- (void)fetchShareIfNecessaryForObject:(id)a0 completionHandler:(id /* block */)a1;
- (id)objectForCKShareRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
- (id)objectForShare:(id)a0 accountID:(id)a1 context:(id)a2;
- (void)prepareShare:(id)a0 forObject:(id)a1 qualityOfService:(long long)a2 completionHandler:(id /* block */)a3;
- (void)processShareAcceptanceWithMetadata:(id)a0 managedObjectContext:(id)a1 alertBlock:(id /* block */)a2 showObjectBlock:(id /* block */)a3;
- (void)registerShareForObject:(id)a0 itemProvider:(id)a1 generateThumbnails:(char)a2;
- (void)registerShareForObject:(id)a0 itemProvider:(id)a1 generateThumbnails:(char)a2 sharePreparationHandler:(id /* block */)a3;
- (void)removeShareIfNeededWithOwnedObjectID:(id)a0 countParticipants:(char)a1 completionHandler:(id /* block */)a2;
- (void)saveServerShare:(id)a0 persistParticipantEvents:(char)a1 accountID:(id)a2;
- (void)saveShare:(id)a0 attemptNumber:(id)a1 forObject:(id)a2 accountID:(id)a3 container:(id)a4 qualityOfService:(long long)a5 retryPrepHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (void)saveShare:(id)a0 forObject:(id)a1 accountID:(id)a2 container:(id)a3 qualityOfService:(long long)a4 retryPrepHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (void)saveShare:(id)a0 forObject:(id)a1 qualityOfService:(long long)a2 completionHandler:(id /* block */)a3;
- (void)saveShare:(id)a0 withRootRecord:(id)a1 object:(id)a2 accountID:(id)a3 container:(id)a4 qualityOfService:(long long)a5 completionHandler:(id /* block */)a6;
- (void)updatePendingInvitationsInAccountWithID:(id)a0 receivedSince:(id)a1;
- (void)updateRootRecordMapWithShare:(id)a0;

@end
