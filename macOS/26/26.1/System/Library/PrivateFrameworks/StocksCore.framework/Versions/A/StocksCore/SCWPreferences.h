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
- (id)signedRequestForURL:(id)a0 parameters:(id)a1;
- (id)stocksLanguageCode;
- (id)_stocksUserAgent;
- (void).cxx_destruct;
- (id)stocksYQLBaseURL;
- (void)resetLocale;
- (id)stocksLanguageCodeForLanguage:(id)a0;
- (id)stocksCountryCode;
- (id)init;

@end
