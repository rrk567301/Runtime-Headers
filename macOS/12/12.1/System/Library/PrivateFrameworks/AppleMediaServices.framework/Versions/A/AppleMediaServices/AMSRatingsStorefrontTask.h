@class AMSBagKeySet, NSString;
@protocol AMSBagProtocol;

@interface AMSRatingsStorefrontTask : AMSTask <AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (readonly) unsigned long long mediaType;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;

@end
