@class NSDate, NSString, NSLock, NSMutableDictionary, NSDictionary, NSMutableString, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface CalculateCurrencyCache : NSObject <NSXMLParserDelegate> {
    NSDate *_lastRefreshDate;
    NSString *_currentCurrency;
    NSNumber *_currentRate;
    NSMutableString *_currentString;
    NSMutableDictionary *_mutableCurrencyCache;
}

@property (class, readonly, nonatomic) CalculateCurrencyCache *shared;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializer;
@property (nonatomic) double lastRefreshTimeInternal;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) double refreshInterval;
@property (readonly) unsigned long long uuid;
@property (readonly, nonatomic) NSDate *lastRefreshDate;
@property (readonly, nonatomic) char needsRefresh;
@property (nonatomic) double timeout;
@property (readonly, nonatomic) NSDictionary *currencyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)refresh;
- (char)refreshIfNeeded;
- (id)_consumerSecret;
- (char)_queue_refresh:(double)a0;
- (id)_consumerKey;
- (void)_loadPersistedCurrencyCache;
- (char)_needsRefresh;
- (void)_queue_persistCurrencyCache;
- (char)_queue_refresh;
- (void)_reloadPersistedCurrencyCacheForTesting;
- (id)createCredential;
- (char)refreshWithTimeOut:(float)a0;
- (char)updateCurrencyCacheWithData:(id)a0;

@end
