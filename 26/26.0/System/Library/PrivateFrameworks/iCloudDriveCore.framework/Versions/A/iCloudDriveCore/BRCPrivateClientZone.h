@class NSMutableArray, BRCProblemReport, BRCCreateZoneAndSubscribeOperation, NSMapTable, NSSet, NSObject, NSMutableSet, BRCServerZoneHealthState, BRCPrivateServerZone, BRCAppLibrary;
@protocol OS_dispatch_queue;

@interface BRCPrivateClientZone : BRCClientZone {
    BRCCreateZoneAndSubscribeOperation *_createZoneOperation;
    NSObject<OS_dispatch_queue> *_createZoneQueue;
    NSMutableArray *_zoneCreationCompletionBlocks;
    NSMutableArray *_syncBarriers;
    BRCProblemReport *_problemReport;
    NSMutableArray *_lastResets;
    NSMapTable *_pcsChainFolderOperations;
}

@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BOOL isDocumentScopePublic;
@property (readonly, nonatomic) BRCPrivateServerZone *privateServerZone;
@property (readonly, nonatomic) BOOL hasDefaultAppLibrary;
@property (readonly, nonatomic) BRCAppLibrary *defaultAppLibrary;
@property (readonly, nonatomic) NSMutableSet *appLibraries;
@property (readonly, nonatomic) NSSet *appLibraryIDs;
@property (readonly, nonatomic) BOOL zoneHealthNeedsSyncUp;
@property (readonly, nonatomic) BRCServerZoneHealthState *zoneHealthState;
@property (readonly, nonatomic) BOOL resetFrequencyIsTooHigh;

- (BOOL)parentIDHasLiveUnchainedChildren:(id)a0;
- (id)fetchZoneRootItemWithFacade:(id)a0;
- (id)initWithMangledID:(id)a0 dbRowID:(id)a1 plist:(id)a2 session:(id)a3 initialCreation:(BOOL)a4;
- (void)updateWithPlist:(id)a0;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 db:(id)a1;
- (void)setServerZone:(id)a0;
- (id)rootItemID;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 db:(id)a1;
- (void)addAppLibrary:(id)a0 offline:(BOOL)a1;
- (id)asPrivateClientZone;
- (id)plist;
- (void)syncedDownZoneHealthState:(id)a0;
- (BOOL)dumpTablesToContext:(id)a0 includeAllItems:(BOOL)a1 error:(id *)a2;
- (BOOL)dumpActivityToContext:(id)a0 includeExpensiveActivity:(BOOL)a1 error:(id *)a2;
- (void)removeAppLibrary:(id)a0;
- (void)resume;
- (void)reportProblemWithType:(int)a0 recordName:(id)a1;
- (void)_checkResultSetIsEmpty:(id)a0 logToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1 reason:(id)a2 result:(BOOL *)a3;
- (id)serverAliasByUnsaltedBookmarkData:(id)a0;
- (id)unchainedItemInfoInServerTruthEnumeratorParentedTo:(id)a0;
- (void)clearProblemReport;
- (id)getCreateCloudKitZoneOperation;
- (void)syncedDownZoneHealthRequestID:(long long)a0;
- (void)createCloudKitZoneWithGroup:(id)a0 completion:(id /* block */)a1;
- (unsigned int)pcsChainStateForItem:(id)a0;
- (void)registerPCSChainingOperation:(id)a0;
- (BOOL)recomputeAppSyncBlockState;
- (id)prepareProblemReportForSyncWithRequestID:(long long)a0;
- (void)_createCloudKitZoneWithGroup:(id)a0 completion:(id /* block */)a1;
- (id)pcsChainOperationForItemID:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)zoneHealthWasReset;
- (void)addAppLibrary:(id)a0;

@end
