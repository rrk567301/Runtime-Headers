@class VSPreferences, VSUserAccountRegistry;

@interface VSUserAccountService : VSServiceListener

@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) VSUserAccountRegistry *registry;

- (id)init;
- (void).cxx_destruct;
- (void)performMigrationWithCompletion:(id /* block */)a0;
- (id)_securityTaskForCurrentConnection;

@end
