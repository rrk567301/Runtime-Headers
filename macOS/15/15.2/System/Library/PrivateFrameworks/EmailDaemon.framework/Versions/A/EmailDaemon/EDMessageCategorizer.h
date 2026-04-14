@class EDSenderPersistence, NSString, EMNSUserDefaultsBoolObserver, NSConditionLock, EDCategoryCoreAnalyticsLogger, EMCachingContactStore, EFLocked, NSObject, EDMessageCategorizationResult, ECDKIMVerifier, EDCategoryPersistence;
@protocol OS_os_log, EDInteractionEventLog, EMVIPManager, OS_dispatch_queue;

@interface EDMessageCategorizer : NSObject <EDMessageChangeHookResponder, EFSignpostable>

@property (class, readonly, nonatomic) EDMessageCategorizationResult *noneMessageCategorizationResult;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, nonatomic) id<EMVIPManager> vipManager;
@property (readonly, nonatomic) EMCachingContactStore *contactStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) EDCategoryPersistence *persistence;
@property (retain, nonatomic) id<EDInteractionEventLog> eventLog;
@property (readonly, nonatomic) NSConditionLock *categorizationState;
@property (retain, nonatomic) EDCategoryCoreAnalyticsLogger *analyticsLogger;
@property (retain, nonatomic) EDSenderPersistence *senderPersistence;
@property (readonly, nonatomic) ECDKIMVerifier *verifier;
@property (retain, nonatomic) EMNSUserDefaultsBoolObserver *automaticallySummarizeMessages;
@property (retain, nonatomic) EFLocked *messagesWithCategorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

+ (id)log;
+ (id)queryForMessagesToCategorizeForVersion:(long long)a0;

- (void).cxx_destruct;
- (BOOL)_categorizeMessages:(id)a0 senderAttributes:(id)a1 signpostID:(unsigned long long)a2 results:(id)a3 reason:(long long)a4;
- (id)_categorizeMappedMessages:(id)a0;
- (BOOL)_categorizeMessages:(id)a0 signpostID:(unsigned long long)a1 results:(id *)a2 reason:(long long)a3;
- (id)_makeCategorizationResultFromPrediction:(id)a0;
- (id)_makeCategorizationResultMetadataFromPrediction:(id)a0;
- (id)_messagesToCategorizeFromMessages:(id)a0;
- (BOOL)_shouldGenerateSummaries;
- (id)_stableEmailAddressForMessage:(id)a0;
- (unsigned long long)_subCategoryFor:(id)a0;
- (id)_transformBaseMessages:(id)a0 senderAttributes:(id)a1 signpostID:(unsigned long long)a2;
- (id)_transformResult:(id)a0;
- (BOOL)categorizeMessages:(id)a0 reason:(long long)a1;
- (id)initWithCategoryPersistence:(id)a0 eventLog:(id)a1 vipManager:(id)a2 contactStore:(id)a3 analyticsLogger:(id)a4 senderPersistence:(id)a5 hookRegistry:(id)a6;
- (void)persistenceDidAddNewMessages:(id)a0;
- (void)persistenceDidReconcileJournaledMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceWillAddNewMessages:(id)a0;

@end
