@class CCDataResource, CCDifferentialUpdateCache, CCDatabaseWriter, NSError, CCDonationServicePriors, CCDonationRequest;

@interface CCDifferentialSetUpdater : NSObject {
    CCDatabaseWriter *_databaseWriter;
    CCDataResource *_dataResource;
    unsigned short _itemType;
    CCDifferentialUpdateCache *_diffUpdateCache;
}

@property (nonatomic) unsigned char status;
@property (readonly, nonatomic) NSError *fullSetFallbackError;
@property (readonly, nonatomic) CCDonationServicePriors *priors;
@property (readonly, nonatomic) unsigned int clientAddOrUpdateCount;
@property (readonly, nonatomic) unsigned int clientRemoveCount;
@property (readonly, nonatomic) BOOL clientFinished;
@property (readonly, nonatomic) CCDonationRequest *request;

- (void)abort;
- (void).cxx_destruct;
- (id)description;
- (BOOL)removeItemsMatchingPredicate:(id)a0 error:(id *)a1;
- (unsigned long long)priorVersion;
- (BOOL)_deleteStaleItems:(id *)a0;
- (BOOL)_diffUpdateItemContentData:(id)a0 metaContentData:(id)a1 error:(id *)a2;
- (id)_finishWithRevisionToken:(id)a0 designateAsFullSet:(BOOL)a1 error:(id *)a2;
- (id)_readLocalSourcePriorsFromDatabase;
- (unsigned char)_statusForUpdate;
- (BOOL)_tombstoneSet:(id *)a0;
- (id)_unsupportedUpdateTypeForMethod:(const char *)a0;
- (BOOL)addDocumentCacheContents:(id)a0 associatedItemContents:(id)a1 associatedItemMetaContents:(id)a2 associatedSet:(id)a3 error:(id *)a4;
- (BOOL)addItemsWithContents:(id)a0 metaContents:(id)a1 error:(id *)a2;
- (BOOL)finishUpdateWithRevisionToken:(id)a0 designateAsFullSet:(BOOL)a1 tombstoneSet:(BOOL)a2 error:(id *)a3;
- (id)initWithRequest:(id)a0 databaseWriter:(id)a1 dataResource:(id)a2 error:(id *)a3;
- (BOOL)removeSourceItemIdentifier:(id)a0 error:(id *)a1;
- (BOOL)updateRemoteDeviceUUID:(id)a0 options:(unsigned short)a1 mergeableDelta:(id)a2 peerDeviceSite:(id)a3 relayedDeviceSites:(id)a4 error:(id *)a5;

@end
