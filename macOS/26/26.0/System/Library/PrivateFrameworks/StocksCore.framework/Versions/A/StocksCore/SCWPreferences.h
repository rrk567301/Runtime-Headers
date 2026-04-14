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

- (id)stocksLanguageCodeForLanguage:(id)a0;
- (id)stocksYQLBaseURL;
- (id)stocksLanguageCode;
- (id)stocksCountryCode;
- (id)_stocksUserAgent;
- (id)init;
- (id)signedRequestForURL:(id)a0 parameters:(id)a1;
- (void)resetLocale;
- (id)_stocksAcceptLanguage;
- (void).cxx_destruct;

@end
