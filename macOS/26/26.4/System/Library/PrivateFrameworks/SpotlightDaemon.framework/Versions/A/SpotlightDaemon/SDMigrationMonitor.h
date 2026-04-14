@class NSObject;
@protocol OS_dispatch_queue;

@interface SDMigrationMonitor : NSObject <SDEventHandlerProvider>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL unlocked;
@property (nonatomic) BOOL foundExtensions;
@property (nonatomic) BOOL finishedDataMigration;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ eventHandler;

+ (id)sharedInstance;

- (void)unlock;
- (void)suspendMigrationQueue;
- (void)_finishMigration;
- (void).cxx_destruct;
- (void)_didFindExtensions:(id)a0;
- (id)init;
- (void)monitorDataMigrationWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;
- (void)registerHandlerWithEventMonitor:(id)a0;
- (void)resumeMigrationQueue;

@end
