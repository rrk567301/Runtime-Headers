@class NSString, ACAccount, NSError, AMSSuggestedRatingsProviderResult;
@protocol AMSBagProtocol;

@interface AMSSuggestedRatingsProviderTask : AMSTask <AMSBagConsumer> {
    void /* unknown type, empty encoding */ configuration;
}

@property (class, nonatomic, readonly) NSString *bagSubProfile;
@property (class, nonatomic, readonly) NSString *bagSubProfileVersion;

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) id<AMSBagProtocol> bag;
@property (nonatomic, readonly) NSString *clientIdentifier;

+ (id)createBagForSubProfile;

- (id)perform;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAccount:(id)a0 clientIdentifier:(id)a1 mediaType:(unsigned long long)a2 storeFront:(id)a3 bag:(id)a4;
- (void)performAsyncWithCompletionHandler:(void (^)(AMSSuggestedRatingsProviderResult *, NSError *))a0;

@end
