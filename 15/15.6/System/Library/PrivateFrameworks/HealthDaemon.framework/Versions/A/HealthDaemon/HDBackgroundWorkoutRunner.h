@class NSString, HDAssertionManager, NSObject, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDBackgroundWorkoutRunner : NSObject <HDProcessStateObserver, HDAssertionObserver> {
    HDDaemon *_daemon;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acquireBKSAssertionForClient:(id)a0;
+ (char)hasBackgroundPermissionForBundleIdentifier:(id)a0 errorOut:(id *)a1;
+ (void)releaseBKSAssertion:(id)a0 forClient:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDaemon:(id)a0;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void)assertionManager:(id)a0 assertionTaken:(id)a1;
- (void)processDidEnterForeground:(id)a0;
- (id)takeBackgroundRunningAssertionForOwnerIdentifier:(id)a0 client:(id)a1 includeCoreLocationAssertion:(char)a2;

@end
