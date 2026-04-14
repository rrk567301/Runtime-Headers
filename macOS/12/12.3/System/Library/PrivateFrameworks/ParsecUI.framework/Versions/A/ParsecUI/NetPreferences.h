@class NSString;

@interface NetPreferences : NSObject {
    NSString *_buildVersion;
    NSString *_productVersion;
    NSString *_UUID;
    BOOL _serviceDebugging;
    BOOL _isNetworkReachable;
}

@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable;

+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

- (id)init;
- (void).cxx_destruct;
- (id)UUID;
- (void)resetLocale;
- (id)stocksCountryCode;
- (id)_stocksUserAgent;
- (id)_stocksAcceptLanguage;
- (void)setupLogging;
- (id)stocksLanguageCode;
- (void)addStocksHeadersToPostRequest:(id)a0;
- (id)financeRequestAttributes;
- (id)_urlStringWithHost:(id)a0;
- (id)fullQuoteURLOverrideForStock:(id)a0;
- (id)backsideLogoURL;
- (BOOL)serviceDebugging;
- (id)serviceDebuggingPath;
- (id)stocksYQLBaseURL;
- (id)signedRequestForURL:(id)a0 parameters:(id)a1;

@end
