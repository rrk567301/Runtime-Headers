@class NSString, AMSRatingsProviderResult, NSArray, NSError;
@protocol AMSBagProtocol;

@interface AMSRatingsProviderTask : AMSTask <AMSBagConsumer> {
    void /* function */ storeFront;
    void /* function */ clientIdentifier;
    void /* function */ logKey;
}

@property (class, nonatomic, readonly) NSString *bagSubProfile;
@property (class, nonatomic, readonly) NSString *bagSubProfileVersion;

@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) NSString *storeFront;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) id<AMSBagProtocol> bag;
@property (nonatomic, readonly) unsigned long long useCase;
@property (nonatomic) BOOL regionalRatingSystem;
@property (nonatomic, readonly) NSString *logKey;

+ (id)createBagForSubProfile;
+ (id)ratingWithValue:(id)a0 mediaType:(unsigned long long)a1 storeFront:(id)a2 clientIdentifier:(id)a3 bag:(id)a4;

- (id)cachedResult;
- (void).cxx_destruct;
- (id)init;
- (id)performTask;
- (void)cacheWithResult:(id)a0 in:(id)a1;
- (id)cachedResultFrom:(id)a0;
- (id)initForAllMediaWithClientIdentifier:(id)a0 useCase:(unsigned long long)a1 bag:(id)a2;
- (id)initForAllMediaWithStoreFront:(id)a0 clientIdentifier:(id)a1 useCase:(unsigned long long)a2 bag:(id)a3;
- (id)initForAllMediaWithUnratedRatingsForStoreFront:(id)a0 clientIdentifier:(id)a1 useCase:(unsigned long long)a2 bag:(id)a3;
- (id)initWithMediaType:(unsigned long long)a0 clientIdentifier:(id)a1 bag:(id)a2;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1 clientIdentifier:(id)a2 bag:(id)a3;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1 clientIdentifier:(id)a2 bag:(id)a3 useCase:(unsigned long long)a4 regionalRatingSystem:(BOOL)a5;
- (void)performTaskAsyncWithCompletionHandler:(void (^)(AMSRatingsProviderResult *, NSError *))a0;
- (void)queryItemsForMediaType:(unsigned long long)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (id)urlBagKeyForMediaType:(unsigned long long)a0;

@end
