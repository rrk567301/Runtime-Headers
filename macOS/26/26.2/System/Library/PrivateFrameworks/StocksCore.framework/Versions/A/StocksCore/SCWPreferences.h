@class NSString;

@interface SCWPreferences : NSObject {
    NSString *_requestCountryCode;
    NSString *_requestLanguageCode;
    NSString *_acceptLanguageCode;
}

@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;
@property (retain) NSString *acceptLanguageCode;
@property (readonly, nonatomic) NSString *UUID;

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (id)_stocksUserAgent;
- (void)resetLocale;
- (id)stocksYQLBaseURL;
- (id)stocksLanguageCode;
- (void).cxx_destruct;
- (id)stocksCountryCode;
- (id)signedRequestForURL:(id)a0 parameters:(id)a1;
- (id)init;
- (id)stocksLanguageCodeForLanguage:(id)a0;
- (id)_stocksAcceptLanguage;

@end
