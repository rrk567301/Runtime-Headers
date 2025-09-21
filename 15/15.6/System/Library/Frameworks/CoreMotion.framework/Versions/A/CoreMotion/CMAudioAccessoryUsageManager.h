@class NSObject;
@protocol OS_dispatch_queue, CMAudioAccessoryUsageDelegate;

@interface CMAudioAccessoryUsageManager : NSObject {
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> { struct CLConnectionClient *__value_; } __ptr_; } _locationConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (class, readonly, nonatomic, getter=isAvailable) char available;

@property (weak, nonatomic) id<CMAudioAccessoryUsageDelegate> delegate;
@property (readonly, nonatomic, getter=isAuthorized) long long authorizationStatus;

+ (long long)isAuthorized;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_disconnect;
- (void)_handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)_connect;
- (void)requestAudioAccessoryUsageUpdatesWithHandler:(id /* block */)a0;

@end
