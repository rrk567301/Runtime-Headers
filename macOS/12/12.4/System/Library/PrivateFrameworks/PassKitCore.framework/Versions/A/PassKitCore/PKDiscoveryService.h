@class NSObject, NSHashTable, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKDiscoveryService : NSObject <PKDiscoveryServiceExportedInterface> {
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)observers;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (long long)welcomeCardCount;
- (void)displayedDiscoveryItemWithIdentifier:(id)a0 isWelcomeCard:(BOOL)a1 afterSwipingToCard:(BOOL)a2 multipleStoryCardsAvailable:(BOOL)a3 callToActionIdentifier:(id)a4 cardSize:(long long)a5;
- (void)manifestAllowsMiniCardsWithCompletion:(id /* block */)a0;
- (void)discoveryArticleLayoutsWithCompletion:(id /* block */)a0;
- (void)updateDiscoveryItemWithIdentifier:(id)a0 forAction:(long long)a1 completion:(id /* block */)a2;
- (void)updateDiscoveryManifestWithCompletion:(id /* block */)a0;
- (void)discoveryItemsWithCompletion:(id /* block */)a0;
- (void)insertDiscoveryItems:(id)a0 discoveryArticleLayouts:(id)a1 completion:(id /* block */)a2;
- (void)processDiscoveryItemsAndMessagesWithCompletion:(id /* block */)a0;
- (void)discoveryEngagementMessagesForPassUniqueIdentifier:(id)a0 active:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)updateDiscoveryEngagementMessageWithIdentifier:(id)a0 forAction:(long long)a1 completion:(id /* block */)a2;
- (void)insertDiscoveryEngagementMessages:(id)a0 completion:(id /* block */)a1;
- (void)removeDiscoveryMessageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)completedDiscoveryItemCTAWithCompletion:(id /* block */)a0;
- (void)setArchivedTokenForDiscoveryAnalyticsSubject:(id)a0 completion:(id /* block */)a1;
- (void)rulesWithCompletion:(id /* block */)a0;
- (void)insertRule:(id)a0 completion:(id /* block */)a1;
- (void)deleteRuleWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)evaluateRulesWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)removeDiscoveryUserNotificationsWithCompletion:(id /* block */)a0;
- (void)discoveryArticleLayoutsUpdated:(id)a0;
- (void)discoveryEngagementMessagesUpdated;
- (id /* block */)errorHandlerForMethod:(SEL)a0 completion:(id /* block */)a1;
- (void)discoveryLaunchedWithReferralSource:(unsigned long long)a0 identifier:(id)a1;
- (void)displayedDiscoveryEngagementMessageWithIdentifier:(id)a0;
- (void)expandedDiscoveryItemWithIdentifier:(id)a0 callToActionIdentifier:(id)a1 afterSwipingToCard:(BOOL)a2 multipleStoryCardsAvailable:(BOOL)a3 cardSize:(long long)a4;
- (void)dismissedDiscoveryItemWithIdentifier:(id)a0 callToActionIdentifier:(id)a1 cardSize:(long long)a2;
- (void)tappedDiscoveryItemWithIdentifier:(id)a0 callToAction:(id)a1 cardSize:(long long)a2;
- (void)removedAllDiscoveryItems;
- (void)archivedTokenForDiscoveryAnalyticsSubjectWithCompletion:(id /* block */)a0;

@end
