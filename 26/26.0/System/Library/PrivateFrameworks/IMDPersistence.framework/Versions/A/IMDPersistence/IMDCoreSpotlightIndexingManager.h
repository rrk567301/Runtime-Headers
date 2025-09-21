@class NSString, IMDCoreSpotlightSearchableItemGenerator, NSNumber;

@interface IMDCoreSpotlightIndexingManager : NSObject <IMDCoreSpotlightMessageReindexingJobDelegate, IMDCoreSpotlightChatReindexingJobDelegate, IMDSpotlightSWYQueries, IMDIndexingIntegration, IMDCoreSpotlightSearchableItemGeneratorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IMDCoreSpotlightSearchableItemGenerator *searchableItemGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IMDCoreSpotlightSearchableItemGenerator *searchableItemGenerator;
@property (retain, nonatomic, setter=_setLastIndexDeleteReason:) NSNumber *_lastIndexDeleteReason;
@property (readonly, nonatomic) BOOL isIntegrationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)handleToIdentityMapKey;
+ (id)localIdentityKey;
+ (id)localIdentityProofKey;
+ (id)resolvedURLCustomKey;

- (id)init;
- (void).cxx_destruct;
- (void)setNeedsIndexing:(BOOL)a0;
- (void)_FPProviderIDForItems:(id)a0;
- (id)_chatDictionaryForChatGUID:(id)a0;
- (id)_collaborationIndex;
- (void)_deleteAllSearchableItemsWithReason:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_deleteSearchableItemsWithIdentifiers:(id)a0 fromIndex:(id)a1 withReason:(long long)a2 completionHandler:(id /* block */)a3;
- (void)_performSpotlightRequestWithBlock:(id /* block */)a0;
- (id)_personIdentityQueue;
- (void)_resolvedURLForItems:(id)a0;
- (void)_sanitizeIndexesForCurrentVersionIfNeeded:(id /* block */)a0;
- (void)_setNeedsDeferredIndexing:(BOOL)a0;
- (BOOL)_shouldIndexNextBatchForBatchSize:(unsigned long long)a0;
- (void)_updateItem:(id)a0 withFPProviderID:(id)a1;
- (void)_updateItem:(id)a0 withIdentityMap:(id)a1 localIdentity:(id)a2 localIdentityProof:(id)a3 completionBlock:(id /* block */)a4;
- (void)_updateItem:(id)a0 withResolvedURL:(id)a1;
- (void)addChatGUIDs:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)checkForIndexedAttachmentGUIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)checkForIndexedChatGUIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)checkForIndexedMessageGUIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)deleteAllDonationsForAppDeletionWithCompletion:(id /* block */)a0;
- (void)deleteAttachmentGUIDs:(id)a0 reason:(long long)a1 completionHandler:(id /* block */)a2;
- (void)deleteChatGUIDs:(id)a0 reason:(long long)a1 completionHandler:(id /* block */)a2;
- (void)deleteMessageGUIDs:(id)a0 reason:(long long)a1 completionHandler:(id /* block */)a2;
- (id)filteringExtensionBundleID;
- (void)indexChatsWithReason:(long long)a0 completion:(id /* block */)a1;
- (void)indexNextMessageBatchIfNeeded:(unsigned long long)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (id)indexableIdentifiersForMessageDict:(id)a0 chatDictionary:(id)a1 context:(id)a2 requireIndexableAttachments:(BOOL)a3;
- (void)markAttachmentWithFilePath:(id)a0 sender:(id)a1 recipients:(id)a2 isIncoming:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)messageIndexingJobWithSize:(long long)a0 context:(id)a1 timingCollection:(id)a2;
- (void)postProcessIndexingForItem:(id)a0 chatDictionary:(id)a1 context:(id)a2;
- (void)postProcessItemsPotentiallyNeedingAdditionalMetadata:(id)a0;
- (void)prepareForReindexingWithReason:(long long)a0 completion:(id /* block */)a1;
- (void)reIndexWithLocalProofOfInclusionForItemsAsync:(id)a0 completionHandler:(id /* block */)a1;
- (void)reindexMessagesWithCollaborationMetadata:(id)a0 collaborationMetadata:(id)a1 reason:(long long)a2 completionBlock:(id /* block */)a3;
- (void)setNeedsMessageReindexingWithReason:(long long)a0 completion:(id /* block */)a1;

@end
