@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSSpotlightReindexingBackgroundSystemTaskManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)registerAndSubmitRequestForTask:(id /* block */)a0;

@end
