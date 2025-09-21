@class EDConversationPersistence;
@protocol EDMessageChangeHookResponder;

@interface MFConversationCalculator : NSObject

@property (nonatomic) char logConversationCalculationPerformance;
@property (nonatomic) char logConversationCalculationTrace;
@property (nonatomic) char logConversationCalculationSubjectPrefixTrace;
@property (nonatomic) char forceConversationSplits;
@property (nonatomic) char alwaysValidateConversations;
@property (nonatomic) char recordConversationCalculationPerformanceMetrics;
@property (weak, nonatomic) EDConversationPersistence *conversationPersistence;
@property (weak, nonatomic) id<EDMessageChangeHookResponder> hookResponder;

+ (id)log;
+ (char)isRootMessageSubject:(id)a0;

- (void).cxx_destruct;
- (void)_addMessage:(id)a0 toConversation:(long long)a1;
- (void)_calculateConversationForMessage:(id)a0;
- (long long)_createNewConversationFromMessage:(id)a0;
- (void)_mergeMessagesInConversations:(id)a0 withConversation:(id)a1;
- (void)_updateAllRowsMissingFuzzyAncestorWithConnection:(id)a0;
- (void)_updateAllRowsMissingRootValueWithConnection:(id)a0;
- (void)_updatePrefixWithConnection:(id)a0 withNewPrefix:(id)a1 forMessagesWithSubject:(long long)a2;
- (id)initWithConversationPersistence:(id)a0 hookResponder:(id)a1;
- (void)updateAllRowsMissingConversationsWithConnection:(id)a0 conversationUserInfo:(id)a1 conversationsWereReset:(char)a2 activityProgressUpdater:(id)a3;
- (void)updateConversationRootsWithConnection:(id)a0 onlyForMessagesMissingRoots:(char)a1;
- (void)updateConversationsIfNeededWithConnection:(id)a0;
- (char)updateSubjectPrefixesWithConnection:(id)a0 onlyForMessagesMissingConversations:(char)a1;

@end
