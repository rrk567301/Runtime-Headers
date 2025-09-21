@class CCDatabaseUpdater, NSString, CCDataResourceWriter, CCDifferentialUpdateCache, CCSet;
@protocol CCSetChangeNotifierProtocol;

@interface CCDifferentialUpdater : NSObject {
    CCDatabaseUpdater *_databaseUpdater;
    CCDataResourceWriter *_setWriter;
    id /* block */ _completion;
    CCSet *_set;
    CCDifferentialUpdateCache *_diffUpdateCache;
    id<CCSetChangeNotifierProtocol> _changeNotifier;
    char _interrupt;
    char _deltaProduced;
    NSString *_requestDescription;
}

@property (nonatomic) char didCommit;
@property (readonly, nonatomic) unsigned int clientAddOrUpdateCount;
@property (readonly, nonatomic) unsigned int clientRemoveCount;
@property (readonly, nonatomic) unsigned char updateType;
@property (readonly, nonatomic) long long incrementalErrorCode;

+ (id)updaterForSet:(id)a0 withRequest:(id)a1 setWriter:(id)a2 changeNotifier:(id)a3 timeout:(double)a4;

- (id)description;
- (void).cxx_destruct;
- (char)finish;
- (void)_complete:(char)a0;
- (void)abort;
- (unsigned long long)priorVersion;
- (char)_clearSetTombstoneStatus;
- (char)_deleteStaleItems;
- (char)_diffUpdateItemsWithContents:(id)a0 metaContents:(id)a1;
- (void)_interrupt;
- (char)_shouldCommit;
- (char)_tombstoneSet;
- (char)addItemsWithContents:(id)a0 metaContents:(id)a1;
- (id)initWithSet:(id)a0 request:(id)a1 setWriter:(id)a2 database:(id)a3 changeNotifier:(id)a4 completion:(id /* block */)a5;
- (char)mergeRemoteDelta:(id)a0 peerDeviceSite:(id)a1 relayedDeviceSites:(id)a2;
- (unsigned long long)modifiedRowCount;
- (char)removeSourceItemIdentifier:(id)a0;
- (char)waitForCommit:(char)a0;

@end
