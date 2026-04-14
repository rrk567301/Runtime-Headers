@class NSCountedSet, NSString, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface FMXPCTransactionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *txn_ops_queue;
@property (retain, nonatomic) NSCountedSet *activeTransactions;
@property (retain, nonatomic) NSString *keepAliveActivityIdentifier;
@property (retain, nonatomic) NSObject<OS_os_transaction> *masterTransaction;

+ (id)sharedInstance;

- (id)init;
- (void)_disableOldKeepAliveActivity;
- (void).cxx_destruct;
- (void)_disableLaunchOnRebootActivity:(id)a0;
- (void)dealloc;
- (id)initSingleton;
- (void)_enableKeepAlive;
- (void)setLaunchOnRebootActivity:(id)a0 keepAliveActivity:(id)a1;
- (void)_disableKeepAlive;
- (void)endTransaction:(id)a0;
- (id)dumpActiveTransactions;
- (void)beginTransaction:(id)a0;

@end
