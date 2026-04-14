@class NSString, NSDictionary, AMSUIPaymentVerificationMetrics, ACAccount, NSViewController;
@protocol AMSBagProtocol;

@interface AMSUIParentalVerificationIDCardTask : AMSTask

@property (retain) ACAccount *account;
@property (retain) NSDictionary *accountParameters;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSString *displayName;
@property (retain) AMSUIPaymentVerificationMetrics *metrics;
@property (retain) ACAccount *originalAccount;
@property (retain) NSViewController *viewController;

+ (id)_encoderWithBag:(id)a0 account:(id)a1;
+ (id)_sessionWithBag:(id)a0 account:(id)a1 accountParameters:(id)a2;
+ (id)_tokenFromObject:(id)a0;
+ (id)_tokenResultFromTokenString:(id)a0;
+ (id)_nonceFromString:(id)a0;
+ (id)_accountToUseFromGivenAccount:(id)a0 accountParameters:(id)a1 accountStore:(id)a2;
+ (id)_promiseToFetchURLResponseForAccount:(id)a0 accountParameters:(id)a1 url:(id)a2 bag:(id)a3 requestBody:(id)a4;
+ (id)_requestDictFromMinimumAge:(long long)a0 walletData:(id)a1 nonce:(id)a2;
+ (long long)_minAgeFromObject:(id)a0;

- (void).cxx_destruct;
- (id)performTask;
- (id)initWithAccount:(id)a0 accountParameters:(id)a1 bag:(id)a2 displayName:(id)a3 metrics:(id)a4 viewController:(id)a5;
- (id)_promiseToRequestIDCardData;
- (id)_dataFromIDCardForMinimumAge:(long long)a0 nonce:(id)a1;
- (id)_promiseToLoadPVTURLWithBody:(id)a0;
- (id)_promiseToFetchIDCardTokenURL:(id)a0 requestBody:(id)a1;
- (id)_promiseToPromptAfterFailure;

@end
