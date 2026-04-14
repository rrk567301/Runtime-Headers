@class CVNLPCommSafetyHandler, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMADImageSafetyClassificationResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    CVNLPCommSafetyHandler *_handler;
}

+ (id)sharedResource;

- (id)init;
- (void).cxx_destruct;
- (id)handler;
- (void)purge;

@end
