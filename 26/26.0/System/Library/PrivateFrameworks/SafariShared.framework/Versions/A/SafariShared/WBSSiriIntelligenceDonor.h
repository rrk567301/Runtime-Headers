@class WBSSpotlightReindexingBackgroundSystemTaskManager, NSMutableDictionary, NSMutableSet, WBSSpotlightDonationEntityCorrelator, NSObject, WBSDispatchSourceTimer;
@protocol OS_dispatch_queue;

@interface WBSSiriIntelligenceDonor : NSObject {
    NSObject<OS_dispatch_queue> *_coreSpotlightDonationSerialQueue;
    NSMutableSet *_identifiersLeftToReindex;
    NSObject<OS_dispatch_queue> *_tabDonationBackgroundQueue;
    NSObject<OS_dispatch_queue> *_tabDonationExitQueue;
    WBSSpotlightDonationEntityCorrelator *_entityCorrelator;
    WBSDispatchSourceTimer *_tabDonationTimer;
    NSMutableDictionary *_tabsToDonate;
    NSMutableSet *_closedTabsToIndex;
    WBSSpotlightReindexingBackgroundSystemTaskManager *_reindexingBackgroundSystemTaskManager;
}

@property (class, readonly, nonatomic) WBSSiriIntelligenceDonor *sharedInstance;

+ (id)_bookmarkItemIdentifierForURLString:(id)a0;
+ (id)_coreSpotlightItemIdentifierForURLString:(id)a0;
+ (id)_coreSpotlightTabDonationIdentifierForProfileWithIdentifier:(id)a0;
+ (id)_historyItemIdentifierForURLString:(id)a0 profileIdentifier:(id)a1;
+ (id)coreSpotlightBookmarkIsVistedForProfileIDsAttributeKey;
+ (id)coreSpotlightBookmarkTitleAttributeKey;
+ (id)coreSpotlightHistoryItemIsSTPAttributeKey;
+ (id)coreSpotlightPageDonationIdentifierForProfileWithIdentifier:(id)a0;
+ (id)coreSpotlightProfileIDKey;
+ (id)coreSpotlightQuickWebsiteSearchProviderDonationIdentifier;
+ (id)coreSpotlightQuickWebsiteSearchProviderSearchURLTemplateStringAttributeKey;
+ (id)coreSpotlightQuickWebsiteSearchProviderSourcePageURLStringAttributeKey;
+ (id)coreSpotlightQuickWebsiteSearchProviderTopDomainAttributeKey;
+ (id)coreSpotlightTabTabGroupAttributeKey;
+ (id)historyItemIdentifierForURL:(id)a0 profileIdentifier:(id)a1;
+ (id)historyItemIdentifierForURLString:(id)a0 profileIdentifier:(id)a1;
+ (id)quickWebsiteSearchProviderIdentifierForURLString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_arrayByFilteringDeletedHistoryItems:(id)a0;
- (id)_computeCoreSpotlightIDsForBookmarks:(id)a0;
- (void)_computeCoreSpotlightIndexingRequirementsForAllIDs:(id)a0 indexedIDs:(id)a1 outIndexIDs:(id *)a2 outRemoveIDs:(id *)a3;
- (id)_contentDescriptionForURL:(id)a0;
- (id)_coreSpotlightItemsSubarrays:(id)a0;
- (void)_donateDataForPageWithURL:(id)a0 history:(id)a1 fullPageText:(id)a2 readerText:(id)a3 profileIdentifier:(id)a4 personalizationData:(id)a5;
- (void)_donateHistoryItemsToCoreSpotlightCreatedAfterDate:(id)a0 beforeDate:(id)a1 historiesForProfiles:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)_donatePendingTabDataOnBackgroundQueue;
- (void)_donatePendingTabDataOnQueue:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_donateQuickWebsiteSearchProvider:(id)a0;
- (void)_getIndexedBookmarksIDsToAttributesWithCompletionHandler:(id /* block */)a0;
- (void)_getIndexedIDsForSearchQueryString:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getIndexedItemsForSearchQueryString:(id)a0 attributes:(id)a1 completionHandler:(id /* block */)a2;
- (void)_indexCoreSpotlightData:(id)a0 filterDeletedHistoryItems:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_indexCoreSpotlightData:(id)a0 filterDeletedHistoryItems:(BOOL)a1 onDispatchQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_indexHistoryItemsToCoreSpotlight:(id)a0 filterDeletedHistoryItems:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_indexTabData:(id)a0 onDispatchQueue:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_removeCoreSpotlightDataWithIDs:(id)a0 onDispatchQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)_sanitizeAttributeSet:(id)a0;
- (void)_scheduleTabBatchDonationTimerIfNeeded;
- (id)_searchableItemsForIDs:(id)a0 allBookmarks:(id)a1;
- (id)_topLevelDomainFromURLString:(id)a0;
- (void)donateAllHistoryToCoreSpotlightForProfiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)donateDataForPageWithURL:(id)a0 fullPageText:(id)a1 readerText:(id)a2 profileIdentifier:(id)a3 personalizationData:(id)a4;
- (void)donatePendingTabDataNowWithCompletionHandler:(id /* block */)a0;
- (void)donateSafariBookmarksToCoreSpotlight:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)donateSafariQuickWebsiteSearchProvidersToCoreSpotlight:(id)a0 isUpdate:(BOOL)a1;
- (void)export30DaysWorthOfHistoryToCoreSpotlightForProfiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)matchSafariQuickWebsiteSearchProvidersWithCoreSpotlight:(id)a0 quickWebsiteSearchControllerDelegate:(id)a1;
- (void)reindexAllBookmarkAndHistoryItems:(id)a0 historiesForProfiles:(id)a1 withAcknowledgementHandler:(id /* block */)a2;
- (void)reindexAllIndexedItems:(id)a0 historiesForProfiles:(id)a1 withAcknowledgementHandler:(id /* block */)a2;
- (void)reindexBookmarkAndHistoryItemsWithIdentifiers:(id)a0 allBookmarks:(id)a1 historiesForProfiles:(id)a2 withAcknowledgementHandler:(id /* block */)a3;
- (void)reindexItemsWithIdentifiers:(id)a0 allBookmarks:(id)a1 historiesForProfiles:(id)a2 withAcknowledgementHandler:(id /* block */)a3;
- (void)removeAllCoreSpotlightHistoryDataDonatedBySafariForProfileWithIdentifier:(id)a0;
- (void)removeCoreSpotlightDataWithIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDonatedSafariQuickWebsiteSearchProvidersWithURLStringsFromCoreSpotlight:(id)a0;
- (void)setTabNeedsSpotlightDeletion:(id)a0;
- (void)setTabNeedsSpotlightDonation:(id)a0;
- (void)updateCoreSpotlightReadingListDataAfterUpgrade:(id)a0;

@end
