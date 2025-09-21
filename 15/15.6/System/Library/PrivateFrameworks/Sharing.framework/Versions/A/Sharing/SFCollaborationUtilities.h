@class NSString;

@interface SFCollaborationUtilities : NSObject

@property (class, readonly, copy, nonatomic) NSString *_copyRepresentationTypeIdentifier;
@property (class, readonly, copy, nonatomic) NSString *defaultCKOptionsSummary;

+ (void)_addParticipantsAllowedForShare:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_addParticipantsAllowedForURL:(id)a0 share:(id)a1 collaborationService:(id)a2 completionHandler:(id /* block */)a3;
+ (id)_dataForFilepath:(id)a0;
+ (void)_findOriginatingSharedItemInParentItems:(id)a0 forSubitem:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_loadCKShareWithMetadataForItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_loadShareOptionsForCKShareItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_loadShareOptionsForSWYItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_processRemainingActivityItems:(id)a0 toFinalActivityItems:(id)a1 onQueue:(id)a2 completion:(id /* block */)a3;
+ (void)addParticipantsAllowedForCollaborationItem:(id)a0 collaborationService:(id)a1 completionHandler:(id /* block */)a2;
+ (void)addParticipantsAllowedForURL:(id)a0 share:(id)a1 completionHandler:(id /* block */)a2;
+ (id)baseCollaborationDictionaryFromCollaborationItem:(id)a0;
+ (char)canDeleteShareForCollaborationItem:(id)a0;
+ (void)canShowShareOptionsForCollaborationItem:(id)a0 service:(id)a1 completionHandler:(id /* block */)a2;
+ (id)ckShareDictionaryFromCKShare:(id)a0 setupInfo:(id)a1;
+ (id)createItemProviderForFileURL:(id)a0;
+ (id)createLinkMetadataWithCKShare:(id)a0 containerSetupInfo:(id)a1;
+ (id)createLinkMetadataWithCKShareItemProvider:(id)a0;
+ (void)createMailContentForRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (void)createSharingURLForCollaborationRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (void)deleteSharingURL:(id)a0 containerSetupInfo:(id)a1 completionHandler:(id /* block */)a2;
+ (id)descriptionForShareOptions:(id)a0;
+ (id)fileCollaborationItemFromActivityItems:(id)a0;
+ (id)fileShareDictionaryFromFileURLItems:(id)a0;
+ (void)findOriginatingSharedItemForSubitemURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getCKSharingOptionsFromOptions:(id)a0 accessType:(id *)a1 permissionType:(id *)a2 allowOthersToInvite:(id *)a3;
+ (void)getFailureTitle:(id *)a0 message:(id *)a1 error:(id)a2;
+ (char)hasiWorkSendCopyRepresentationForItemProvider:(id)a0;
+ (char)isCKShareItemProvider:(id)a0;
+ (char)isCollaborationItemPrivateShare:(id)a0;
+ (char)isHeroCollaborationActivityType:(id)a0;
+ (char)isOplockError:(id)a0 updatedShare:(id *)a1;
+ (char)isPostCKShareItemProvider:(id)a0;
+ (char)isPreCKShareItemProvider:(id)a0;
+ (char)isSWYActivityItemProvider:(id)a0;
+ (char)isServiceManateeCKShareItemProvider:(id)a0;
+ (void)isShareOwnerOrAdminForCollaborationItem:(id)a0 service:(id)a1 completionHandler:(id /* block */)a2;
+ (void)isShareOwnerOrAdminForFileURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)isShareOwnerOrAdminForShare:(id)a0 completionHandler:(id /* block */)a1;
+ (char)isSharedFileURL:(id)a0 isLocalStorageFileURL:(char *)a1 isiCloudDriveFileURL:(char *)a2 isInSharedFolder:(char *)a3;
+ (char)isThirdPartyFileProviderBackedURL:(id)a0;
+ (void)loadCKContainerForItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadCKShareItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadCKShareItemProvider:(id)a0 onlyPostShare:(char)a1 completionHandler:(id /* block */)a2;
+ (void)loadMetadataForFileURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadMetadataForItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadPendingCollaborationForItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadSendCopyRepresentationIfNeededForActivityItems:(id)a0 completion:(id /* block */)a1;
+ (void)loadSendCopyRepresentationIfNeededForItemProvider:(id)a0 completion:(id /* block */)a1;
+ (void)loadShareOptionsForItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadiWorkCopyRepresentationURLForItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (id)optionsFromCKShare:(id)a0 previousCKOptions:(id)a1 newCKOptions:(id *)a2;
+ (void)requestSharedURLForCollaborationItem:(id)a0 collaborationService:(id)a1 completionHandler:(id /* block */)a2;
+ (void)requestSharedURLForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)shareStatusForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)underlyingCKErrorForError:(id)a0;
+ (id)urlFromActivityItem:(id)a0 allowsLoading:(char)a1;
+ (id)urlRequestsForCollaborationItems:(id)a0;

@end
