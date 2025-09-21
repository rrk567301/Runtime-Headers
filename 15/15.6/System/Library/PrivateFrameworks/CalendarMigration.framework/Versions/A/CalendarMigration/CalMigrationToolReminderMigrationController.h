@class NSString, CalMigrationToolOptions;
@protocol CalMigrationController;

@interface CalMigrationToolReminderMigrationController : NSObject <CalMigrationController>

@property (readonly, nonatomic) CalMigrationToolOptions *toolOptions;
@property (readonly, nonatomic) id<CalMigrationController> defaultProvider;
@property (readonly, nonatomic) char shouldPerformMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithToolOptions:(id)a0 defaultProvider:(id)a1;
- (void)migrationDidFinishWithResult:(unsigned long long)a0;

@end
