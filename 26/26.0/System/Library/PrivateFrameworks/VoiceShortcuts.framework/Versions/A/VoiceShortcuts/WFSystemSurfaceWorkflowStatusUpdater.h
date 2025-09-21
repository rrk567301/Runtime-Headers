@class WFSystemSurfaceWorkflowStatusRegistry, NSObject;
@protocol OS_dispatch_queue, WFDatabaseProvider;

@interface WFSystemSurfaceWorkflowStatusUpdater : NSObject <WFDatabaseObjectObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) WFSystemSurfaceWorkflowStatusRegistry *registry;

- (void)queue_startIfPossible;
- (id)shareSheetStateForWorkflows:(id)a0 database:(id)a1;
- (void)queue_updateFromDatabase:(id)a0;
- (id)initWithDatabaseProvider:(id)a0 eventHandler:(id)a1;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (void)startIfPossible;
- (void).cxx_destruct;

@end
