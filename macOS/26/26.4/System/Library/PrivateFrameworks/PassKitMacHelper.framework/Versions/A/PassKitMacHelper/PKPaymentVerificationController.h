@class NSNumber, NSString, PKVerificationRequestRecord, PKSecureElementPass, PKPaymentWebService;

@interface PKPaymentVerificationController : NSObject {
    NSString *_installedBankAppBundleID;
    NSString *_installedBankAppTitle;
    NSString *_installedBankAppStoreID;
    NSString *_inStoreBankAppTitle;
    NSNumber *_inStoreBankAppStoreID;
    BOOL _bankAppNotFound;
}

@property (retain, nonatomic) PKSecureElementPass *pass;
@property (readonly, nonatomic) PKPaymentWebService *webService;
@property (nonatomic) long long context;
@property (nonatomic) long long verificationContext;
@property (readonly, nonatomic) PKVerificationRequestRecord *verificationRecord;
@property (readonly) NSString *verificationTitleString;
@property (readonly) NSString *verificationBodyString;
@property (readonly) NSString *continueVerificationButtonTitle;
@property (readonly) NSString *alternateMethodButtonTitle;

- (void)_resetState;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_continueVerificationButtonTitleForBankAppMethod:(id)a0;
- (id)_formattedPhoneNumber:(id)a0 forTextMessage:(BOOL)a1;
- (void)_downloadAndAddPass:(id)a0 completion:(id /* block */)a1;
- (id)_bankAppName;
- (void)_didChangePresentation;
- (id)_outboundCallPhoneNumber;
- (void)_queue_sharedPaymentWebServiceChanged;
- (void)_updateVerificationStatusToComplete;
- (BOOL)activeVerificationMethodUsesExternalView;
- (id)bankAppStoreID;
- (void)canPerformAnyVerificationInline:(id /* block */)a0;
- (void)canPerformVerificationInline:(id /* block */)a0;
- (void)canPerformVerificationInlineForMethodGroup:(id)a0 completion:(id /* block */)a1;
- (void)clearSelectedChannel;
- (void)completeVerificationUsingOutboundCall;
- (id)defaultVerificationBodyString;
- (id)initWithPass:(id)a0 webService:(id)a1 context:(long long)a2 verificationContext:(long long)a3;
- (BOOL)isBankAppInstalled;
- (void)launchBankApp;
- (void)performVerificationOptionsRequest:(id)a0 completion:(id /* block */)a1;
- (void)performVerificationUpdateRequest:(id)a0 completion:(id /* block */)a1;
- (void)setActiveVerificationMethodGroup:(id)a0;
- (void)setVerificationRecord:(id)a0;
- (void)sharedPaymentServiceChanged;
- (void)sortVerificationMethods:(id)a0 withCompletion:(id /* block */)a1;
- (void)submitVerificationCode:(id)a0 completion:(id /* block */)a1;
- (void)submitVerificationEntries:(id)a0 completion:(id /* block */)a1;

@end
