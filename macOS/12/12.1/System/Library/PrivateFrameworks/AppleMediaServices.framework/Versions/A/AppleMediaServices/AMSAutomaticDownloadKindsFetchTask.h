@class AMSBagKeySet, NSString, ACAccount;
@protocol AMSBagProtocol;

@interface AMSAutomaticDownloadKindsFetchTask : AMSTask <AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)perform;
- (id)initWithAccount:(id)a0 bag:(id)a1;

@end
