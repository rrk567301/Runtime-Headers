@class EDBiomeInteractionEventLog, EDCategoryPersistence, NSObject, EDMessagePersistence, EFCancelationToken, EDMessageCategorizer, EDMessageAuthenticationAndCategoryMigrator, EDMessageAuthenticationStateMigrator, EDActivityPersistence, EDInteractionLogger, NSString, BGSystemTask, EDPETInteractionEventLog, EDCategoryCoreAnalyticsLogger, EDMessageAuthenticator;
@protocol OS_os_log, OS_dispatch_queue, EDAccountsProvider;

@interface EDCategorySubsystem : NSObject <EFLoggable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _systemTaskLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDPETInteractionEventLog *petLog;
@property (readonly, nonatomic) EDBiomeInteractionEventLog *biomeLog;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDCategoryPersistence *categoryPersistence;
@property (readonly, nonatomic) EDActivityPersistence *activityPersistence;
@property (retain, nonatomic) EDMessageAuthenticationAndCategoryMigrator *migrator;
@property (retain, nonatomic) EDMessageAuthenticationStateMigrator *nonInboxMessageAuthenticator;
@property (readonly, nonatomic) EDMessageCategorizer *messageCategorizer;
@property (readonly, nonatomic) EDCategoryCoreAnalyticsLogger *coreAnalyticsLogger;
@property (readonly, nonatomic) EDMessageAuthenticator *messageAuthenticator;
@property (readonly, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (retain, nonatomic) BGSystemTask *systemTask;
@property (retain, nonatomic) EFCancelationToken *migrationToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *systemTaskQueue;
@property (readonly, nonatomic) EDInteractionLogger *interactionLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)_registerAuthStateMigrationTask;
- (id)_majorAndMinorVersionFrom:(id)a0;
- (void)_registerCoreAnalyticsLoggerTask;
- (void)_registerInboxMigrationTasks;
- (void)_schedulePETSubmissionActivityForLog:(id)a0;
- (void)_startCategoryMigrationWithBGTask:(id)a0 andReason:(long long)a1;
- (void)_startNonInboxMessageAuthenticationnWithBGTask:(id)a0;
- (id)initWithPersistence:(id)a0 userProfileProvider:(id)a1 vipManager:(id)a2 sourceApplicationBundleIdentifier:(id)a3 categorizationAnalyticsLogger:(id)a4;
- (void)recategorizeAllMessagesIfModelVersionChangedFrom:(id)a0 to:(id)a1;
- (void)scheduleRecurringActivity;

@end
