@class NSSet, WBSSiteMetadataManager, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface _ASPasswordManagerIconController : NSObject {
    BOOL _hasLoadedHistory;
    NSObject<OS_dispatch_queue> *_iconFetchingQueue;
    WBSSiteMetadataManager *_siteMetadataManager;
    NSSet *_domainsEligibleForIconFetching;
    NSMutableArray *_blocksAwaitingHistoryItems;
    NSMutableDictionary *_activeRequestIDToRequestToken;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequest:(id)a0;
- (void)_fetchHistory;
- (void)fetchIconWithOneTimeRequestForHighLevelDomain:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 responseHandler:(id /* block */)a2;
- (void)fetchIconWithOngoingRequestForHighLevelDomain:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 requestID:(id)a2 responseHandler:(id /* block */)a3;
- (void)_fetchIconForHighLevelDomain:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 shouldUseOneTimeRequest:(BOOL)a2 requestID:(id)a3 responseHandler:(id /* block */)a4;
- (void)_requestIconForHighLevelDomain:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 shouldUseOneTimeRequest:(BOOL)a2 requestID:(id)a3 responseHandler:(id /* block */)a4;
- (BOOL)historyShouldScheduleMaintenance:(id)a0;

@end
