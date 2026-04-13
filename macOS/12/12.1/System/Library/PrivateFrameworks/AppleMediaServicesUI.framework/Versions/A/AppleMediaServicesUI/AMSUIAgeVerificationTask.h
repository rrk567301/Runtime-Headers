@class NSString, NSViewController, AMSBagKeySet, ACAccount, NSDictionary, AMSAgeVerificationTask;
@protocol AMSBagProtocol;

@interface AMSUIAgeVerificationTask : AMSTask <AMSBagConsumer, AMSRequestPresentationDelegate>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (retain) AMSAgeVerificationTask *task;
@property (retain) NSViewController *viewController;
@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) NSDictionary *options;
@property (retain) NSString *pincode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)performTask;
- (id)isVerificationNeeded;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (id)_performTaskForAccount:(id)a0 withBag:(id)a1 viewController:(id)a2;
- (id)initWithAccount:(id)a0 bag:(id)a1 options:(id)a2 viewController:(id)a3;

@end
