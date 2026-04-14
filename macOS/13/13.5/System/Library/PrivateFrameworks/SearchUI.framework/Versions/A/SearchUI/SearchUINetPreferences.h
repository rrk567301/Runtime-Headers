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
- (id)backsideLogoURL;
- (id)signedRequestForURL:(id)a0 parameters:(id)a1;
- (id)_stocksAcceptLanguage;
- (id)_stocksUserAgent;
- (id)_urlStringWithHost:(id)a0;
- (void)addStocksHeadersToPostRequest:(id)a0;
- (id)financeRequestAttributes;
- (id)fullQuoteURLOverrideForStock:(id)a0;
- (void)resetLocale;
- (BOOL)serviceDebugging;
- (id)serviceDebuggingPath;
- (void)setupLogging;
- (id)stocksCountryCode;
- (id)stocksLanguageCode;
- (id)stocksYQLBaseURL;

@end
