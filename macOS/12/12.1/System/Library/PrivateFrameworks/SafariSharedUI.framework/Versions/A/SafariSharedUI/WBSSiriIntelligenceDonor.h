@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSSiriIntelligenceDonor : NSObject {
    NSObject<OS_dispatch_queue> *_coreSpotlightDonationSerialQueue;
}

@property (class, readonly, nonatomic) WBSSiriIntelligenceDonor *sharedInstance;

+ (id)_historyItemIdentifierForURLString:(id)a0;
+ (id)_coreSpotlightItemIdentifierForURLString:(id)a0;
+ (id)coreSpotlightPageDonationIdentifier;
+ (id)_bookmarkItemIdentifierForURLString:(id)a0;
+ (id)historyItemIdentifierForURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)processRemovedHistoryItems:(id)a0;
- (void)removeAllCoreSpotlightHistoryDataDonatedBySafari;
- (BOOL)donateTextInWebView:(id)a0 extractedReaderText:(id)a1 canDonateFullPageText:(BOOL)a2 extractInnerText:(id /* block */)a3;
- (void)donateSafariBookmarksToCoreSpotlight:(id)a0;
- (void)donateDataForPageWithURL:(id)a0 fullPageText:(id)a1 readerText:(id)a2;
- (void)_donateDataForPageWithURL:(id)a0 fullPageText:(id)a1 readerText:(id)a2;
- (void)_indexHistoryItemsToCoreSpotlight:(id)a0 completionHandler:(id /* block */)a1;
- (void)_computeCoreSpotlightIDsForBookmarks:(id)a0;
- (id)_indexedBookmarksIDs:(id *)a0;
- (void)_computeCoreSpotlightIndexingRequirementsForAllBookmarksIDs:(id)a0 indexedBookmarksIDs:(id)a1 outIndexIDs:(id *)a2 outRemoveIDs:(id *)a3;
- (void)_removeCoreSpotlightDataWithIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)_searchableItemsForIDs:(id)a0 allBookmarks:(id)a1;
- (void)_indexCoreSpotlightData:(id)a0 completionHandler:(id /* block */)a1;
- (id)_contentDescriptionForURL:(id)a0;
- (void)_sanitizeAttributeSet:(id)a0;
- (void)export30DaysWorthOfHistoryToCoreSpotlightWithCompletionHandler:(id /* block */)a0;

@end
