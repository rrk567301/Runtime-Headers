@class NSString, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface ReadingListImageProvider : NSObject <WBSSiteMetadataProvider> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMapTable *_itemsToRequests;
    NSMutableDictionary *_requestsToResponses;
    NSMutableDictionary *_requestsToLeadImageTokens;
    NSMutableDictionary *_requestsToFallbackImageTokens;
    NSMutableSet *_itemsWithRetainedLPMetadataResponses;
}

@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canHandleRequest:(id)a0;
- (void)_storeAndNotifyFetchedImage:(id)a0 forRequest:(id)a1 isThumbnail:(BOOL)a2 isGenerated:(BOOL)a3;
- (void)_cancelFallbackImageSubrequestForRequest:(id)a0;
- (void)_cancelLeadImageSubrequestForRequest:(id)a0;
- (void)_discardResponseForRequest:(id)a0;
- (id)_displayableImageForImage:(id)a0 request:(id)a1 isGenerated:(BOOL *)a2;
- (void)_fetchFallbackImageForRequest:(id)a0;
- (void)_fetchLeadImageForRequest:(id)a0;
- (void)_notifyResponse:(id)a0 forRequest:(id)a1;
- (void)_provideThumbnailForRequest:(id)a0;
- (void)_readingListItemThumbnailWasLoaded:(id)a0;
- (void)_releaseLPMetadataResponseForItem:(id)a0;
- (id)_responseForRequest:(id)a0;
- (void)_retainLPMetadataResponseForItem:(id)a0;
- (void)_storeAndNotifyResponseForRequest:(id)a0 image:(id)a1 isThumbnail:(BOOL)a2 isGenerated:(BOOL)a3;
- (void)_storeResponse:(id)a0 forRequest:(id)a1;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (void)stopWatchingUpdatesForRequest:(id)a0;

@end
