@class EDMessageAuthenticator, NSString, EDMessagePersistence, EDCategoryPersistence, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface EDMessageAuthenticationStateMigrator : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDCategoryPersistence *categoryPersistence;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDMessageAuthenticator *authenticator;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryForInboxMessagesToAuthenticate;
+ (id)queryForNonInboxMessagesToAuthenticate;

- (void).cxx_destruct;
- (void)_authenticateMessageBatch:(id)a0 cancelationToken:(id)a1;
- (void)_iteratePersistedMessagesDroppingLockForMatchingQuery:(id)a0 limit:(long long)a1 batchSize:(long long)a2 cancelationToken:(id)a3 requireProtectedData:(BOOL)a4 handler:(id /* block */)a5;
- (id)initWithCategoryPersistence:(id)a0 authenticator:(id)a1 messagePersistence:(id)a2;
- (void)migrateMessageAuthenticationStateForQuery:(id)a0 cancelationToken:(id)a1;

@end
