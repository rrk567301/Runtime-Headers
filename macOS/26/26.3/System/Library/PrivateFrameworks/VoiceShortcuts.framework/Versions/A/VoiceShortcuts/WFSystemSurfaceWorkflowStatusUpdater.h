@class WFSystemSurfaceWorkflowStatusRegistry;
@protocol WFDatabaseProvider;

@interface WFSystemSurfaceWorkflowStatusUpdater : NSObject

@property (readonly, nonatomic) WFSystemSurfaceWorkflowStatusRegistry *registry;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;

- (void)updateFromDatabase:(id)a0;
- (void).cxx_destruct;
- (void)updateIfPossible;
- (id)shareSheetStateForWorkflows:(id)a0 database:(id)a1;
- (id)initWithDatabaseProvider:(id)a0;

@end
