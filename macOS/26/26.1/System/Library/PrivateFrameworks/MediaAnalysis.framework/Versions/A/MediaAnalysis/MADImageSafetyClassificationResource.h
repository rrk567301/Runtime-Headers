@class NSObject, SCMLHandler;
@protocol OS_dispatch_queue;

@interface MADImageSafetyClassificationResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    SCMLHandler *_safetyHandlerTypeN;
    SCMLHandler *_safetyHandlerTypeGV;
}

@property (readonly, nonatomic) SCMLHandler *safetyHandlerTypeN;
@property (readonly, nonatomic) SCMLHandler *safetyHandlerTypeGV;

+ (id)sharedResource;

- (void)purge;
- (void).cxx_destruct;
- (id)init;
- (long long)activeCost;
- (long long)inactiveCost;

@end
