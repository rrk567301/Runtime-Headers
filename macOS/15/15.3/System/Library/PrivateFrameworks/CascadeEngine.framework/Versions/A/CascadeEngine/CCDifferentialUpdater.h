@class CCSet, CCDevice, CCDatabaseSetStateReader, CCDataResourceWriter, CCDifferentialUpdateCache, CCDatabaseUpdater;
@protocol CCSetChangeNotifierProtocol;

@interface CCDifferentialUpdater : NSObject {
    CCDatabaseUpdater *_databaseUpdater;
    CCDatabaseSetStateReader *_stateReader;
    CCDataResourceWriter *_setWriter;
    id /* block */ _completion;
    unsigned int _clientAddOrUpdateCount;
    unsigned int _clientRemoveCount;
    CCSet *_set;
    CCDevice *_device;
    CCDifferentialUpdateCache *_diffUpdateCache;
    id<CCSetChangeNotifierProtocol> _changeNotifier;
    BOOL _isIncremental;
    BOOL _interrupt;
}

@property (nonatomic) BOOL didCommit;
@property (readonly, nonatomic) long long incrementalErrorCode;

+ (id)updaterForSet:(id)a0 withRequest:(id)a1 setWriter:(id)a2 changeNotifier:(id)a3 timeout:(double)a4;

- (void).cxx_destruct;
- (BOOL)finish:(BOOL)a0;
- (void)_complete:(BOOL)a0;
- (void)abort;
- (BOOL)isIncremental;
- (unsigned long long)priorVersion;
- (void)_interrupt;
- (BOOL)_clearSetTombstoneStatus;
- (BOOL)_deleteStaleItems;
- (BOOL)_diffUpdateItemsWithContents:(id)a0 metaContents:(id)a1;
- (BOOL)_shouldCommit:(BOOL *)a0;
- (BOOL)_tombstoneSet;
- (BOOL)addItemsWithContents:(id)a0 metaContents:(id)a1;
- (id)initWithSet:(id)a0 device:(id)a1 request:(id)a2 setWriter:(id)a3 database:(id)a4 changeNotifier:(id)a5 completion:(id /* block */)a6;
- (BOOL)mergeDelta:(id)a0;
- (unsigned long long)modifiedRowCount;
- (BOOL)removeSourceItemIdentifier:(id)a0;

@end
