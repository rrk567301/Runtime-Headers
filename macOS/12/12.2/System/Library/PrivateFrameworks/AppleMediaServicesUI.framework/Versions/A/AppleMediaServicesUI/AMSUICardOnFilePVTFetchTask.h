@class NSString, NSDictionary, AMSUIPaymentVerificationMetrics, ACAccount, NSViewController;
@protocol AMSBagProtocol;

@interface AMSUICardOnFilePVTFetchTask : AMSTask

@property (retain) ACAccount *account;
@property (retain) NSDictionary *accountParameters;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSString *displayName;
@property (retain) AMSUIPaymentVerificationMetrics *metrics;
@property (retain) ACAccount *originalAccount;
@property (retain) NSViewController *viewController;

+ (id)_accountToUseFromGivenAccount:(id)a0 accountParameters:(id)a1 activeiTunesAccount:(id)a2;
+ (id)_promiseToFetchURLResponseForAccount:(id)a0 accountParameters:(id)a1 url:(id)a2 bag:(id)a3;
+ (BOOL)_isCardOnFileOnStack:(id)a0;
+ (id)_tokenFromObject:(id)a0;
+ (id)_tokenResultFromTokenString:(id)a0;
+ (id)_encoderWithBag:(id)a0 account:(id)a1;
+ (id)_sessionWithBag:(id)a0 account:(id)a1 accountParameters:(id)a2;

- (void).cxx_destruct;
- (id)performTask;
- (id)_promiseToLoadBooleanURL;
- (id)_promiseToPromptAfterCancel;
- (id)_promiseToFetchCardOnStackBooleanURL:(id)a0;
- (id)_promiseToPromptBeforeBiometricAuth;
- (id)_promiseToLoadPVTURL;
- (id)_promiseToFetchCardOnStackTokenURL:(id)a0;
- (id)initWithAccount:(id)a0 accountParameters:(id)a1 bag:(id)a2 displayName:(id)a3 metrics:(id)a4 viewController:(id)a5;

@end
