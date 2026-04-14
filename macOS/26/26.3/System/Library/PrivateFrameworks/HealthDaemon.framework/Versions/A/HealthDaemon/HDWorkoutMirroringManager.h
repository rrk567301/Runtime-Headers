@class NSString, NSMutableDictionary, HDMirroredWorkoutAnalyticsCollector, HDWorkoutManager;

@interface HDWorkoutMirroringManager : NSObject <HDProfileReadyObserver, HDRapportMessengerObserver> {
    HDWorkoutManager *_workoutManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_assertionsByBundleIdentifier;
}

@property (retain, nonatomic) HDMirroredWorkoutAnalyticsCollector *analyticsCollector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_createServerWithData:(id)a0 idsIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_takeBackgroundRuntimeAssertionForProcessWithBundleIdentifier:(id)a0 pid:(int)a1;
- (id)activeSessionBundleIdentifier;
- (id)initWithWorkoutManager:(id)a0;
- (void)launchClientWithBundleIdentifier:(id)a0;
- (void)rapportMessenger:(id)a0 didReceiveRequest:(id)a1 idsIdentifier:(id)a2 data:(id)a3 responseHandler:(id /* block */)a4;
- (void)recoverMirroredWorkoutSessionWithCompletion:(id /* block */)a0;
- (void)setActiveSessionBundleIdentifier:(id)a0;

@end
