@class NSMutableDictionary, NSString, NSDictionary, NSMutableString, NSDate, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface CurrencyCache : NSObject <NSXMLParserDelegate> {
    NSDate *_lastRefreshDate;
    NSString *_currentCurrency;
    NSNumber *_currentRate;
    NSMutableString *_currentString;
    NSMutableDictionary *_mutableCurrencyCache;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializer;
@property (readonly) unsigned long long uuid;
@property (readonly, nonatomic) NSDate *lastRefreshDate;
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
- (BOOL)refreshWithTimeOut:(float)a0;
- (id)createCredential;
- (BOOL)_queue_refresh;
- (void)_queue_persistCurrencyCache;
- (void)_loadPersistedCurrencyCache;
- (void)_queue_loadPersistedCurrencyCache;
- (BOOL)updateCurrencyCacheWithData:(id)a0;

@end
