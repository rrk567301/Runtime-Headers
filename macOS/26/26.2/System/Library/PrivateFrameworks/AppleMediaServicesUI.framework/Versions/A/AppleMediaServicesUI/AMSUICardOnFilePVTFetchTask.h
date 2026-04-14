@class NSViewController, NSDictionary, AMSUIPaymentVerificationMetrics, ACAccount, NSString;
@protocol AMSBagProtocol;

@interface AMSUICardOnFilePVTFetchTask : AMSTask <AMSUIRegulatoryAgeVerificationMethod>

@property (retain) ACAccount *account;
@property (retain) NSDictionary *accountParameters;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSUIPaymentVerificationMetrics *metrics;
@property (retain) ACAccount *originalAccount;
@property (retain) NSViewController *viewController;
@property (readonly) NSString *enablementBagKey;

+ (id)_accountToUseFromGivenAccount:(id)a0 accountParameters:(id)a1 activeiTunesAccount:(id)a2;

- (void).cxx_destruct;
- (id)performTask;
- (id)_promiseToFetchCardOnStackBooleanURL:(id)a0;
- (id)_promiseToFetchCardOnStackTokenURL:(id)a0;
- (id)_promiseToLoadBooleanURL;
- (id)_promiseToLoadPVTURL;
- (id)_promiseToPromptAfterCancel;
- (id)_promiseToPromptBeforeBiometricAuth;
- (id)initWithAccount:(id)a0 accountParameters:(id)a1 bag:(id)a2 metrics:(id)a3 viewController:(id)a4 userInfo:(id)a5;

@end
