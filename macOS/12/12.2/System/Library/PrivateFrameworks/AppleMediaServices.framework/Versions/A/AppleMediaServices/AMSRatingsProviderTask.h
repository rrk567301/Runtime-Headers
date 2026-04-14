@class AMSBagKeySet, NSString;
@protocol AMSBagProtocol;

@interface AMSRatingsProviderTask : AMSTask <AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (readonly) unsigned long long mediaType;
@property (readonly) NSString *storeFront;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;
+ (id)ratingWithValue:(id)a0 mediaType:(unsigned long long)a1 storeFront:(id)a2 clientIdentifier:(id)a3 bag:(id)a4;

- (void).cxx_destruct;
- (id)performTask;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1 clientIdentifier:(id)a2 bag:(id)a3;
- (id)resultWithCachedData:(id)a0;
- (id)_urlForMediaType:(unsigned long long)a0;
- (id)_commonQueryItems;
- (id)_appQueryItems;
- (id)initWithMediaType:(unsigned long long)a0 clientIdentifier:(id)a1 bag:(id)a2;

@end
