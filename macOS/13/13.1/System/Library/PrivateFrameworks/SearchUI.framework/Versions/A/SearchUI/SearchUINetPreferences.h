@class NSString;

@interface SearchUINetPreferences : NSObject {
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
- (void)setupLogging;
- (id)_stocksUserAgent;
- (id)stocksCountryCode;
- (id)stocksLanguageCode;
- (id)_stocksAcceptLanguage;
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
