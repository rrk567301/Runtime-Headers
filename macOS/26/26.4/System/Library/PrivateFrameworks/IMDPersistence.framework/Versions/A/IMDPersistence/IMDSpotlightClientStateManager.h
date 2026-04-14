@class NSLock, NSMutableArray;

@interface IMDSpotlightClientStateManager : NSObject

@property (readonly, nonatomic) NSLock *setupLock;
@property (retain, nonatomic) NSMutableArray *setupBlocks;
@property (nonatomic) BOOL didFinishSetup;

+ (id)sharedManager;
+ (void)fetchSharedManagerWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)_didFinishSetup;
- (void)_migrateClientStateFromManager:(id)a0;
- (void)saveClientState:(id)a0 withCompletion:(id /* block */)a1;
- (void)_currentClientStateAllowingFallback:(BOOL)a0 transactionID:(id)a1 withCompletion:(id /* block */)a2;
- (void)_saveClientState:(id)a0 withCompletion:(id /* block */)a1;
- (void)currentClientStateWithCompletion:(id /* block */)a0;

@end
