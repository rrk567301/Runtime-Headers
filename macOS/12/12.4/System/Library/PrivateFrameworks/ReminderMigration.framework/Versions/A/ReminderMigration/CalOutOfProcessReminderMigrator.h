@class NSURL, NSString;

@interface CalOutOfProcessReminderMigrator : NSObject <CalReminderMigrator>

@property (readonly, nonatomic) NSURL *urlForTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)attemptMigrationWithHomeDirectory:(id)a0;
- (id)initWithURLForTool:(id)a0;
- (BOOL)_invokeToolWithArgument:(id)a0;
- (id)initWithBundleContainingTool:(id)a0;
- (BOOL)testInvocationWithSuccess:(BOOL)a0;

@end
