@class NSString, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface UISApplicationStateClient : NSObject <BSInvalidatable> {
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    char _queue_invalidated;
    BSServiceConnection *_queue_connection;
}

@property (copy, nonatomic) NSString *badgeValue;
@property (nonatomic) char usesBackgroundNetwork;
@property (nonatomic) double nextWakeIntervalSinceReferenceDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithBundleIdentifier:(id)a0;
- (id)_remoteTarget;
- (void)setMinimumBackgroundFetchInterval:(double)a0;

@end
