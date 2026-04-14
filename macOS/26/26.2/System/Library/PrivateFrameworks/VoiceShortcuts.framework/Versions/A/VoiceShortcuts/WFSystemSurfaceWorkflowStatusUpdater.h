@class WFSystemSurfaceWorkflowStatusRegistry;
@protocol WFDatabaseProvider;

@interface WFSystemSurfaceWorkflowStatusUpdater : NSObject

@property (readonly, nonatomic) WFSystemSurfaceWorkflowStatusRegistry *registry;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;

- (id)initWithDatabaseProvider:(id)a0;
- (void).cxx_destruct;
- (id)shareSheetStateForWorkflows:(id)a0 database:(id)a1;
- (void)updateIfPossible;
- (void)updateFromDatabase:(id)a0;

@end
