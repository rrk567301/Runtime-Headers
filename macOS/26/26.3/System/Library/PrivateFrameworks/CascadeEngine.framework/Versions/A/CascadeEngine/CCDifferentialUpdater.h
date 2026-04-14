@class CCSet, NSString, CCDonateServicePriors, CCDataResourceWriter, CCDifferentialUpdateCache, CCDatabaseUpdater;
@protocol CCSetChangeNotifierProtocol;

@interface CCDifferentialUpdater : NSObject {
    CCDatabaseUpdater *_databaseUpdater;
    CCDataResourceWriter *_setWriter;
    id /* block */ _completion;
    CCSet *_set;
    CCDifferentialUpdateCache *_diffUpdateCache;
    id<CCSetChangeNotifierProtocol> _changeNotifier;
    BOOL _interrupt;
    BOOL _deltaProduced;
    NSString *_requestDescription;
}

@property (nonatomic) BOOL didCommit;
@property (readonly, nonatomic) unsigned int clientAddOrUpdateCount;
@property (readonly, nonatomic) unsigned int clientRemoveCount;
@property (readonly, nonatomic) BOOL clientFinished;
@property (readonly, nonatomic) unsigned char updateType;
@property (readonly, nonatomic) long long incrementalErrorCode;
@property (readonly, nonatomic) CCDonateServicePriors *priors;

+ (id)updaterForSet:(id)a0 withRequest:(id)a1 setWriter:(id)a2 changeNotifier:(id)a3 timeout:(double)a4;

- (void)abort;
- (id)description;
- (void)_complete:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)priorVersion;
- (BOOL)_clearSetTombstoneStatus;
- (BOOL)_deleteStaleItems;
- (BOOL)_diffUpdateItemsWithContents:(id)a0 metaContents:(id)a1;
- (BOOL)_finishWithRevisionToken:(id)a0 designateAsFullSet:(BOOL)a1;
- (void)_interrupt;
- (id)_readLocalSourcePriorsFromDatabase;
- (BOOL)_tombstoneSet;
- (BOOL)addItemsWithContents:(id)a0 metaContents:(id)a1;
- (BOOL)finishUpdateWithRevisionToken:(id)a0 designateAsFullSet:(BOOL)a1;
- (id)initWithSet:(id)a0 request:(id)a1 setWriter:(id)a2 database:(id)a3 changeNotifier:(id)a4 completion:(id /* block */)a5;
- (unsigned long long)modifiedRowCount;
- (BOOL)removeSourceItemIdentifier:(id)a0;
- (BOOL)updateRemoteDeviceUUID:(id)a0 options:(unsigned short)a1 mergeableDelta:(id)a2 peerDeviceSite:(id)a3 relayedDeviceSites:(id)a4;
- (BOOL)waitForCommit:(BOOL)a0;

@end
