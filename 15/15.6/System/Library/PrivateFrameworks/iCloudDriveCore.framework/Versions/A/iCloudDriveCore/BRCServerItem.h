@class BRCSharedServerItem, BRCVersion, BRCUserRowID, BRCAccountSession, BRServerMetrics, BRCBasehashSaltInfo, BRCServerZone, NSString, BRCPQLConnection, BRCServerStatInfo, BRCItemID, BRCItemGlobalID, BRCClientZone, BRCDatabaseFacade, BRFieldCKInfo;

@interface BRCServerItem : NSObject <BRCItem> {
    BRCServerZone *_zone;
    BRCPQLConnection *_db;
    BRCDatabaseFacade *_dbFacade;
    BRFieldCKInfo *_sideCarCKInfo;
    char _needsInsert;
    unsigned int _pcsChainState;
}

@property (readonly, nonatomic) BRCSharedServerItem *asSharedItem;
@property (readonly, nonatomic) long long rank;
@property (readonly, nonatomic) NSString *originalName;
@property (readonly, nonatomic) BRCServerStatInfo *st;
@property (readonly, nonatomic) BRCVersion *latestVersion;
@property (readonly, nonatomic) BRServerMetrics *serverMetrics;
@property (readonly, nonatomic) NSString *symlinkTarget;
@property (readonly, nonatomic) BRCBasehashSaltInfo *basehashSaltInfo;
@property (readonly, nonatomic) long long directoryMtime;
@property (readonly, nonatomic) char isDead;
@property (readonly, nonatomic) char isLive;
@property (readonly, nonatomic) char isBRAlias;
@property (readonly, nonatomic) char isPackage;
@property (readonly, nonatomic) char isDocument;
@property (readonly, nonatomic) char isDirectory;
@property (readonly, nonatomic) char isDirectoryFault;
@property (readonly, nonatomic) char isFSRoot;
@property (readonly, nonatomic) char isZoneRoot;
@property (readonly, nonatomic) char isSymLink;
@property (readonly, nonatomic) char isFinderBookmark;
@property (readonly, nonatomic) char isOwnedByMe;
@property (readonly, nonatomic) char isSharedByMe;
@property (readonly, nonatomic) char hasShareIDAndIsOwnedByMe;
@property (readonly, nonatomic) char isShared;
@property (readonly, nonatomic) char isSharedToMe;
@property (readonly, nonatomic) char isSharedToMeTopLevelItem;
@property (readonly, nonatomic) char isSharedToMeChildItem;
@property (readonly, nonatomic) char isTopLevelSharedItem;
@property (readonly, nonatomic) char isChildSharedItem;
@property (readonly, nonatomic) BRCItemID *itemID;
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID;
@property (readonly, nonatomic) BRCUserRowID *ownerKey;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) BRCServerZone *serverZone;
@property (readonly, nonatomic) BRCClientZone *clientZone;
@property (nonatomic) unsigned long long sharingOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (char)canPathMatchMergeWithLocalItem:(id)a0;
- (id)aliasTargetAppLibrary;
- (id)aliasTargetClientZone;
- (char)aliasTargetIsShared;
- (id)aliasTargetItemID;
- (id)appLibraryForRootItem;
- (id)descriptionWithContext:(id)a0;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (id)initFromPQLResultSet:(id)a0 serverZone:(id)a1 error:(id *)a2;
- (id)initWithServerItem:(id)a0;
- (id)newLocalItemWithDBRowID:(unsigned long long)a0;
- (id)newLocalItemWithServerZone:(id)a0 dbRowID:(unsigned long long)a1;
- (void)overrideCKInfoIfNecessaryForOutOfBandSyncOpWithLocalItem:(id)a0;
- (id)parentItemIDOnFS;
- (id)parentItemIDOnServer;
- (id)parentItemOnFS;
- (id)parentLocalItemOnFS;
- (id)parentZoneOnFS;
- (unsigned int)pcsChainState;
- (id)predictedAppLibrary;
- (char)shouldBeGreedyForApply;
- (id)sideCarInfo;
- (char)validateLoggingToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;

@end
