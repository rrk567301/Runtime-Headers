@class ABAccountRepository, ABUserDefaults;

@interface ABDefaultAccountPreference : NSObject {
    ABAccountRepository *_repository;
    ABUserDefaults *_preferences;
}

+ (id)os_log;

- (void)dealloc;
- (void).cxx_destruct;
- (void)postDistributedNotification;
- (id)defaultAccount;
- (void)setDefaultAccount:(id)a0;
- (void)defaultAccountChangedExternally:(id)a0;
- (id)initWithAccountRepository:(id)a0;
- (id)initWithAccountRepository:(id)a0 defaults:(id)a1;
- (id)sanityCheckDefaultAcountIdentifier:(id)a0;
- (id)sanityCheckDefaultAccount:(id)a0;
- (id)fallbackAccount;
- (void)registerForNotifications;
- (void)postDidChangeNotifications;
- (void)postLocalNotification;

@end
