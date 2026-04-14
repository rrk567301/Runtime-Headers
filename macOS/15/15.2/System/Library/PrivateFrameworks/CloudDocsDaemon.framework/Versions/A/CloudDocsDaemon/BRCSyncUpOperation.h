@class NSString, NSMutableDictionary, BRCLocalItem, NSMutableOrderedSet, BRCDirectoryItem, BRCServerZone, NSMutableArray;
@protocol BRCSyncUpCallbackProtocol;

@interface BRCSyncUpOperation : _BRCOperation <BRCOperationSubclass> {
    unsigned long long _requestID;
}

@property (retain, nonatomic) BRCServerZone *serverZone;
@property (retain, nonatomic) NSMutableArray *packagesInFlight;
@property (retain, nonatomic) NSMutableArray *recordsToSave;
@property (retain, nonatomic) NSMutableOrderedSet *deletedRecordIDs;
@property (retain, nonatomic) NSMutableArray *iworkUnsharedShareIDs;
@property (retain, nonatomic) NSMutableDictionary *renamedShareIDsToNames;
@property (retain, nonatomic) NSMutableArray *recordsNeedingNewSharingProtectionInfo;
@property (retain, nonatomic) NSMutableArray *recordsNeedingUpdatedSharingProtectionInfo;
@property (retain, nonatomic) BRCLocalItem *itemNeedingPCSChaining;
@property (retain, nonatomic) BRCDirectoryItem *itemNeedingBasehashSalting;
@property (retain, nonatomic) NSMutableDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSMutableDictionary *pluginFieldsForRecordDeletesByID;
@property (retain, nonatomic) NSMutableDictionary *conflictLosersToResolveByRecordID;
@property (retain, nonatomic) NSString *stageID;
@property (readonly, nonatomic) id<BRCSyncUpCallbackProtocol> syncUpCallback;
@property (readonly, nonatomic) float cost;
@property (readonly, nonatomic) NSMutableArray *createdAppLibraryNames;
@property (copy, nonatomic) id /* block */ syncUpCompletionBlock;
@property (readonly, nonatomic) BOOL encounteredErrorOnPCSChainedItem;
@property (nonatomic) BOOL throttledItemInBatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)syncUpOperationForZone:(id)a0 sessionContext:(id)a1 syncUpCallback:(id)a2 maxCost:(float)a3 retryAfter:(unsigned long long *)a4;

- (void)dealloc;
- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (BOOL)_performMetadataSaltingOperationIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_performModifyRecordsOrBatchOperationWithCompletion:(id /* block */)a0;
- (BOOL)_performPCSChainOperationIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_performShareUpdateAndModifyRecordsWithCompletion:(id /* block */)a0;
- (void)_performUpdateSharingProtectionDataIfNecessary:(id /* block */)a0;
- (BOOL)_recordIsIWorkShareable:(id)a0;
- (void)_scheduleShareUpdateAndModifyRecordsAndZoneCreationOperation;
- (void)_setSharingFieldsOnContentRecord:(id)a0 withProtectionData:(id)a1 baseToken:(id)a2 routingKey:(id)a3 forceOverwrite:(BOOL)a4;
- (id)createActivity;
- (id)initWithZone:(id)a0 sessionContext:(id)a1 syncUpCallback:(id)a2;
- (void)performShareUpdate:(id /* block */)a0;
- (BOOL)prepareWithMaxCost:(float)a0 retryAfter:(unsigned long long *)a1;

@end
