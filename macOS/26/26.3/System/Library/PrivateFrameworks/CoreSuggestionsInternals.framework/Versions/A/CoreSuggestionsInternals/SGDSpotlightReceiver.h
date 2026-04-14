@class NSString, SGDSuggestManager, PSUSummarizationPipeline, SGCoalescingDropBox;
@protocol SpotlightReceiver;

@interface SGDSpotlightReceiver : NSObject <SpotlightReceiver> {
    SGCoalescingDropBox *_deleteInteractionBundleIdDropbox;
    SGCoalescingDropBox *_deleteInteractionIdDropbox;
    SGCoalescingDropBox *_deleteInteractionGroupIdDropbox;
    id<SpotlightReceiver> _duReceiver;
    PSUSummarizationPipeline *_summarizationPipeline;
}

@property (retain) SGDSuggestManager *suggestManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteAllUserActivities:(id)a0;
- (void)deleteAllSearchableItemsWithBundleID:(id)a0;
- (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1;
- (void)addInteractions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (id)init;
- (BOOL)_isFullyInitialized;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 bundleID:(id)a1;
- (void).cxx_destruct;
- (id)supportedContentTypes;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)_addSearchableItem:(id)a0 bundleID:(id)a1;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)addUserAction:(id)a0 withItem:(id)a1;
- (void)purgeSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;

@end
