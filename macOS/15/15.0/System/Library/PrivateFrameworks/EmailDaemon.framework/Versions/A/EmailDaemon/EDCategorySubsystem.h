@class EDPETInteractionEventLog, EDInteractionLogger, EDMessagePersistence, NSString, EDMessageCategorizer, EDMessageAuthenticationAndCategoryMigrator, EDMessageAuthenticator, EDBiomeInteractionEventLog, EDActivityPersistence, NSObject, EDCategoryPersistence;
@protocol OS_os_log;

@interface EDCategorySubsystem : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDPETInteractionEventLog *petLog;
@property (readonly, nonatomic) EDBiomeInteractionEventLog *biomeLog;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDCategoryPersistence *categoryPersistence;
@property (readonly, nonatomic) EDActivityPersistence *activityPersistence;
@property (retain, nonatomic) EDMessageAuthenticationAndCategoryMigrator *migrator;
@property (readonly, nonatomic) EDMessageCategorizer *messageCategorizer;
@property (readonly, nonatomic) EDMessageAuthenticator *messageAuthenticator;
@property (readonly, nonatomic) EDInteractionLogger *interactionLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)_schedulePETSubmissionActivityForLog:(id)a0;
- (void)_startCategoryMigrationWithBGTask:(id)a0 andReason:(long long)a1;
- (id)initWithPersistence:(id)a0 userProfileProvider:(id)a1 vipManager:(id)a2 sourceApplicationBundleIdentifier:(id)a3 categorizationAnalyticsLogger:(id)a4;
- (void)scheduleRecurringActivity;

@end
