@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSSafariScribbleFeedbackSyncEngine : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void)syncScribbleFeedbackUp:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
