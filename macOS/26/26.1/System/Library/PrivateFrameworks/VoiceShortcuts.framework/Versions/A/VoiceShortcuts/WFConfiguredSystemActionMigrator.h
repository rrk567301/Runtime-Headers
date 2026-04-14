@class WFConfiguredSystemActionProvider, WFDatabase;
@protocol WFDatabaseProvider;

@interface WFConfiguredSystemActionMigrator : NSObject

@property (retain, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) WFConfiguredSystemActionProvider *actionProvider;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;

- (void).cxx_destruct;
- (BOOL)completedSystemAppMigration;
- (BOOL)hasSystemActionForBundleIdentifier:(id)a0;
- (id)initWithDatabaseProvider:(id)a0 actionProvider:(id)a1;
- (BOOL)isConfiguredSystemActionValid:(id)a0;
- (void)updateActionsIfNeeded;
- (void)updateConfiguredSystemActionOfType:(id)a0;
- (id)updatedConfiguredSystemActionFrom:(id)a0;

@end
