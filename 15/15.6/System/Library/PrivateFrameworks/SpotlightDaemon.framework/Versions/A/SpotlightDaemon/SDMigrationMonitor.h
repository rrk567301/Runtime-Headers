@class NSObject;
@protocol OS_dispatch_queue;

@interface SDMigrationMonitor : NSObject <SDEventHandlerProvider>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) char unlocked;
@property (nonatomic) char foundExtensions;
@property (nonatomic) char finishedDataMigration;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ eventHandler;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)unlock;
- (void)_didFindExtensions:(id)a0;
- (void)_finishMigration;
- (void)monitorDataMigrationWithCompletionBlock:(id /* block */)a0;
- (void)registerHandlerWithEventMonitor:(id)a0;
- (void)resumeMigrationQueue;
- (void)suspendMigrationQueue;

@end
