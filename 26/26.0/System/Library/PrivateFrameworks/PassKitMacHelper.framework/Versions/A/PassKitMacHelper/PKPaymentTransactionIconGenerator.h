@class NSMutableDictionary, PKPaymentService, NSMutableOrderedSet, PKObjectDownloader, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentTransactionIconGenerator : NSObject {
    NSMutableDictionary *_iconCache;
    NSMutableArray *_iconCacheKeys;
    BOOL _useCache;
    BOOL _hasNetworkAccess;
    double _scale;
    NSMutableOrderedSet *_highPriorityIconRequests;
    NSMutableOrderedSet *_lowPriorityIconRequests;
    NSMutableArray *_inflightRequests;
    BOOL _processingRequest;
    NSObject<OS_dispatch_queue> *_queueIcons;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockRequests;
    PKObjectDownloader *_fileDownloader;
    PKPaymentService *_paymentService;
}

- (void).cxx_destruct;
- (id)_iconCacheKeyForApp:(long long)a0 bundleIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)_iconCacheKeyForTransaction:(id)a0 merchant:(id)a1 size:(struct CGSize { double x0; double x1; })a2 ignoreLogoURL:(BOOL)a3 imageOut:(id *)a4;
- (id)_iconForTransaction:(id)a0 merchant:(id)a1 size:(struct CGSize { double x0; double x1; })a2 ignoreLogoURL:(BOOL)a3 requestType:(unsigned long long)a4 iconHandler:(id /* block */)a5;
- (id)_cacheImageFromDownloaderCacheForURL:(id)a0;
- (void)_downloadLogoForURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_iconCacheKeyForMerchant:(id)a0 size:(struct CGSize { double x0; double x1; })a1 ignoreLogoURL:(BOOL)a2 imageOut:(id *)a3;
- (id)_iconCacheKeyForTransaction:(id)a0 size:(struct CGSize { double x0; double x1; })a1 ignoreLogoURL:(BOOL)a2 imageOut:(id *)a3;
- (id)_iconForCacheKey:(id)a0;
- (id)fileDownloader;
- (id)iconForMerchant:(id)a0 size:(struct CGSize { double x0; double x1; })a1 ignoreLogoURL:(BOOL)a2 requestType:(unsigned long long)a3 iconHandler:(id /* block */)a4;
- (id)iconForTransaction:(id)a0 size:(struct CGSize { double x0; double x1; })a1 ignoreLogoURL:(BOOL)a2 requestType:(unsigned long long)a3 iconHandler:(id /* block */)a4;
- (id)initWithCache:(BOOL)a0 scale:(double)a1;
- (void)queue_processNextIconRequest;

@end
