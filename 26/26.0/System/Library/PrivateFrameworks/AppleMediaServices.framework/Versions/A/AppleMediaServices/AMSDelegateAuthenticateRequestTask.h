@class NSString, AMSBagKeySet, ACAccount, AMSBag;

@interface AMSDelegateAuthenticateRequestTask : AMSTask <AMSURLProtocolDelegate, NSURLSessionDelegate, AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) AMSBag *bag;
@property (readonly) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (id)perform;
- (void).cxx_destruct;
- (id)_encodedURLRequest;
- (id)initWithAccount:(id)a0 bag:(id)a1;

@end
