@class AMSBagKeySet, NSString;

@interface AMSAbsinthe : NSObject <AMSBagConsumer_Project, AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_signingDataFromRequest:(id)a0 buyParams:(id)a1 bag:(id)a2 completion:(id /* block */)a3;
+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)_dataToSignFromRequest:(id)a0 bagDefinition:(id)a1;
+ (id)headersForRequest:(id)a0 buyParams:(id)a1 bag:(id)a2;
+ (id)handleResponse:(id)a0 bag:(id)a1;
+ (id)createBagForSubProfile;


@end
