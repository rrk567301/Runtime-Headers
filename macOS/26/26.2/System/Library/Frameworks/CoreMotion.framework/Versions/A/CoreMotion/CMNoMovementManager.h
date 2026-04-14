@class NSObject;
@protocol CMNoMovementManagerDelegate, OS_dispatch_queue;

@interface CMNoMovementManager : NSObject {
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { struct { struct CLConnectionClient *__ptr_; } ; } fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

@property (class, readonly, nonatomic, getter=isAvailable) BOOL available;

@property (weak, nonatomic) id<CMNoMovementManagerDelegate> delegate;

- (void)_connect;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)_disconnect;
- (void)dealloc;
- (void)_handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)requestLatestStateUpdate;

@end
