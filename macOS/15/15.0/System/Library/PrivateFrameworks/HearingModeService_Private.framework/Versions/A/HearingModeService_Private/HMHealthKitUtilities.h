@class NSObject;
@protocol OS_dispatch_queue;

@interface HMHealthKitUtilities : NSObject {
    BOOL _activateCalled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)sharedInstance;

- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidate;

@end
