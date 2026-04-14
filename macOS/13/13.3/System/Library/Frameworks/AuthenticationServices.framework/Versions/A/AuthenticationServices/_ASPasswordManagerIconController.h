@class NSSet, WBSSiteMetadataManager, NSMutableDictionary, WBSCache, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface _ASPasswordManagerIconController : NSObject {
    BOOL _hasLoadedHistory;
    NSObject<OS_dispatch_queue> *_iconFetchingQueue;
    WBSSiteMetadataManager *_siteMetadataManager;
    NSSet *_domainsEligibleForIconFetching;
    NSMutableArray *_blocksAwaitingHistoryItems;
    NSMutableDictionary *_activeRequestIDToRequestToken;
    WBSCache *_iconCache;
    WBSCache *_monogramCache;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequest:(id)a0;
- (void)_fetchHistory;
- (void)_fetchIconWithName:(id)a0 highLevelDomain:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 shouldUseOneTimeRequest:(BOOL)a3 requestID:(id)a4 responseHandler:(id /* block */)a5;
- (void)_requestIconWithName:(id)a0 highLevelDomain:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 shouldUseOneTimeRequest:(BOOL)a3 requestID:(id)a4 responseHandler:(id /* block */)a5;
- (id)cachedIconForHighLevelDomain:(id)a0;
- (void)fetchIconWithOneTimeRequestWithName:(id)a0 highLevelDomain:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 responseHandler:(id /* block */)a3;
- (void)fetchIconWithOngoingRequestWithName:(id)a0 highLevelDomain:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 requestID:(id)a3 responseHandler:(id /* block */)a4;
- (BOOL)historyShouldScheduleMaintenance:(id)a0;
- (id)monogramForTitle:(id)a0;

@end
