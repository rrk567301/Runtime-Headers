@interface EDAddBusinessColumnsUpgradeStep : NSObject

+ (id)log;
+ (id)_businessesTableSchema;
+ (BOOL)runWithConnection:(id)a0 protectedIndexInitialized:(BOOL)a1 protectedDatabaseName:(id)a2;

@end
