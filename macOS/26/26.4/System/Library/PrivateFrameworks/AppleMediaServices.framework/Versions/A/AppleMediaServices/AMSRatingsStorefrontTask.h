@class NSString, NSArray, NSURL, NSError, AMSRatingsStorefrontResult;
@protocol AMSBagProtocol;

@interface AMSRatingsStorefrontTask : AMSTask <AMSBagConsumer> {
    void /* function */ clientIdentifier;
    void /* function */ logKey;
}

@property (class, nonatomic, readonly) NSString *bagSubProfile;
@property (class, nonatomic, readonly) NSString *bagSubProfileVersion;

@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) id<AMSBagProtocol> bag;
@property (nonatomic, readonly) NSString *logKey;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)init;
- (id)performTask;
- (void)cacheWithResult:(id)a0 on:(id)a1;
- (id)cachedResultFrom:(id)a0;
- (id)initWithMediaType:(unsigned long long)a0 clientIdentifier:(id)a1 bag:(id)a2;
- (void)performTaskAsyncWithCompletionHandler:(void (^)(AMSRatingsStorefrontResult *, NSError *))a0;
- (void)queryItemsWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (id)urlBagKeyForMediaType:(unsigned long long)a0;
- (void)urlForMediaType:(unsigned long long)a0 completionHandler:(void (^)(NSURL *, NSError *))a1;

@end
