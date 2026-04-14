@class NSObject, SCMLHandler;
@protocol OS_dispatch_queue;

@interface MADImageSafetyClassificationResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    SCMLHandler *_safetyHandlerTypeN;
    SCMLHandler *_safetyHandlerTypeGV;
}

@property (readonly, nonatomic) SCMLHandler *safetyHandlerTypeN;
@property (readonly, nonatomic) SCMLHandler *safetyHandlerTypGV;

+ (id)sharedResource;

- (void)purge;
- (id)init;
- (void).cxx_destruct;
- (long long)activeCost;
- (long long)inactiveCost;
- (id)safetyHandlerTypeGV;

@end
