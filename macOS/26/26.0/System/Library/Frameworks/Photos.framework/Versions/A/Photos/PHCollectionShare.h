@class NSString, NSURL, NSDate, NSData;

@interface PHCollectionShare : PHAssetCollection <PHShare>

@property (readonly, copy, nonatomic) NSDate *cloudSubscriptionDate;
@property (readonly, nonatomic) short unseenContentState;
@property (readonly, nonatomic) unsigned long long unseenAssetsCount;
@property (readonly, nonatomic) short notificationState;
@property (readonly, nonatomic) short publicURLState;
@property (readonly, nonatomic) short creationType;
@property (readonly, copy, nonatomic) NSString *cloudPersonID;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) BOOL currentUserContributionEnabled;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, nonatomic) unsigned long long photosCount;
@property (readonly, nonatomic) unsigned long long videosCount;
@property (readonly, nonatomic) unsigned long long cloudPhotoCount;
@property (readonly, nonatomic) unsigned long long cloudVideoCount;
@property (readonly, nonatomic) unsigned long long cloudItemCount;
@property (readonly, nonatomic) unsigned short status;
@property (readonly, nonatomic) short publicPermission;
@property (readonly, nonatomic) unsigned short trashedState;
@property (readonly, nonatomic) short publishState;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *shareURL;
@property (readonly, nonatomic) NSString *scopeIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) NSData *ckShareData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (void)fetchCollectionShareFromShareURL:(id)a0 ignoreExistingShare:(BOOL)a1 photoLibrary:(id)a2 completionHandler:(id /* block */)a3;
+ (id)fetchCollectionSharesWithScopeIdentifiers:(id)a0 options:(id)a1;
+ (id)localIdentifierWithUUID:(id)a0;
+ (BOOL)managedObjectSupportsSharePendingState;
+ (BOOL)managedObjectSupportsShareTrashedState;

- (BOOL)canPerformEditOperation:(long long)a0;
- (void).cxx_destruct;
- (unsigned long long)estimatedPhotosCount;
- (Class)changeRequestClass;
- (void)declineWithCompletion:(id /* block */)a0;
- (unsigned long long)estimatedAssetCount;
- (unsigned long long)estimatedVideosCount;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (void)reportWithCompletion:(id /* block */)a0;
- (void)sendInvitationsForParticipants:(id)a0 completion:(id /* block */)a1;

@end
