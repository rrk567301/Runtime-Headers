@class NSObject;
@protocol OS_dispatch_queue;

@interface CMGNSSMotionManager : NSObject {
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { struct { struct CLConnectionClient *__ptr_; } ; } _locationdConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic, getter=isGNSSMotionAvailable) BOOL gnssMotionAvailable;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (void)startGNSSMotionUpdatesWithUpdateFrequency:(long long)a0;
- (void)stopGNSSMotionUpdates;

@end
