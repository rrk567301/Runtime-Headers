@class VIService, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMADVIResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VIService *_service;
}

@property (readonly, nonatomic) VIService *service;

- (void)purge;
- (void).cxx_destruct;
- (id)init;
- (long long)activeCost;
- (long long)inactiveCost;

@end
