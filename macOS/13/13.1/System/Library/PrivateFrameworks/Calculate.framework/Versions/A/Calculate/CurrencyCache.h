@class NSDate, NSString, NSLock, NSMutableDictionary, NSDictionary, NSMutableString, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface CurrencyCache : NSObject <NSXMLParserDelegate> {
    NSDate *_lastRefreshDate;
    NSString *_currentCurrency;
    NSNumber *_currentRate;
    NSMutableString *_currentString;
    NSMutableDictionary *_mutableCurrencyCache;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializer;
@property (nonatomic) double lastRefreshTimeInternal;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long uuid;
@property (readonly, nonatomic) NSDate *lastRefreshDate;
@property (readonly, nonatomic) BOOL needsRefresh;
@property (nonatomic) double refreshInterval;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSDictionary *currencyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)refresh;
- (id)_consumerKey;
- (id)_consumerSecret;
- (BOOL)_needsRefresh;
- (BOOL)refreshIfNeeded;
- (BOOL)refreshWithTimeOut:(float)a0;
- (id)createCredential;
- (BOOL)_queue_refresh:(double)a0;
- (BOOL)_queue_refresh;
- (void)_queue_persistCurrencyCache;
- (void)_loadPersistedCurrencyCache;
- (BOOL)updateCurrencyCacheWithData:(id)a0;

@end
