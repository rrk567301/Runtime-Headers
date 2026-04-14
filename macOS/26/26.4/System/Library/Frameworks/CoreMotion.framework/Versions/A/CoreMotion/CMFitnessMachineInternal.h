@class NSObject;
@protocol OS_dispatch_queue;

@interface CMFitnessMachineInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (void)_teardown;
- (id)init;
- (void)dealloc;
- (void)_feedFitnessMachineData:(id)a0;

@end
