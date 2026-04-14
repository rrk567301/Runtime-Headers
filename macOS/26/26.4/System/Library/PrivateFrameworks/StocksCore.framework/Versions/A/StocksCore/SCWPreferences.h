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

- (id)_stocksAcceptLanguage;
- (id)stocksCountryCode;
- (id)stocksLanguageCode;
- (void)resetLocale;
- (id)_stocksUserAgent;
- (void).cxx_destruct;
- (id)init;
- (id)signedRequestForURL:(id)a0 parameters:(id)a1;
- (id)stocksLanguageCodeForLanguage:(id)a0;
- (id)stocksYQLBaseURL;

@end
