@class NSString, NSDictionary, ACAccount;

@interface AMSUIRegulatoryAgeVerificationController : AMSUIWebViewController <AMSUIWebDelegate> {
    void /* function */ userInfo;
    void /* unknown type, empty encoding */ accountParameters;
    void /* unknown type, empty encoding */ cfuHandler;
    void /* unknown type, empty encoding */ loadPromise;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ resolveHandler;
}

@property (class, nonatomic, readonly) NSString *bagSubProfile;
@property (class, nonatomic, readonly) NSString *bagSubProfileVersion;

@property (nonatomic, readonly) id resultPromise;
@property (nonatomic) BOOL showSkipButton;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)createBagForSubProfile;

- (void)updateViewConstraints;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)webViewController:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)initWithBag:(id)a0 account:(id)a1 clientInfo:(id)a2;
- (void)handleSkipButtonPress;
- (id)initWithAccount:(id)a0 accountParameters:(id)a1 bag:(id)a2;
- (id)initWithAccountParameters:(id)a0 bag:(id)a1;
- (id)loadController;
- (void)webContextWithCombining:(NSString *)a0 userInfo:(NSDictionary *)a1 accountParameters:(NSDictionary *)a2 account:(ACAccount *)a3 completionHandler:(void (^)(NSDictionary *))a4;
- (void)webViewController:(id)a0 didEncodeNetworkRequest:(id)a1;
- (void)webViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2 completion:(id /* block */)a3;

@end
