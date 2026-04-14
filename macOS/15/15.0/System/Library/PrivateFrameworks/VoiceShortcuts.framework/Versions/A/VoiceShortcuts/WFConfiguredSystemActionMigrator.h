@class WFConfiguredSystemActionProvider, WFDebouncer, WFDatabase, NSObject;
@protocol WFDatabaseProvider, OS_dispatch_queue;

@interface WFConfiguredSystemActionMigrator : NSObject <WFDatabaseObjectObserver>

@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) WFDebouncer *databaseDeboucer;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) WFConfiguredSystemActionProvider *actionProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (void)handleDatabaseChangeWithDelay;
- (id)initWithDatabaseProvider:(id)a0 actionProvider:(id)a1;
- (BOOL)isConfiguredSystemActionValid:(id)a0;
- (void)updateActionsIfNeededWithReason:(id)a0;
- (void)updateConfiguredSystemActionOfType:(id)a0;
- (id)updatedConfiguredSystemActionFrom:(id)a0;

@end
