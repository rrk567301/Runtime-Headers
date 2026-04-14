@class NSMutableDictionary, NSDictionary, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue, HMDRemoteEventRouterProcessStateChangeAssertionDelegate, HMETimerProvider;

@interface HMDRemoteEventRouterProcessStateChangeAssertion : NSObject <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<HMETimerProvider> timerProvider;
@property (readonly, weak, nonatomic) id<HMDRemoteEventRouterProcessStateChangeAssertionDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *applicationsAndIntervals;
@property (retain, nonatomic) NSMutableSet *foregroundProcesses;
@property (retain, nonatomic) NSMutableDictionary *backgroundProcesses;
@property (nonatomic) BOOL isProcessForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 timerProvider:(id)a1 applicationsAndIntervals:(id)a2 delegate:(id)a3;
- (void)foregroundStateChangedWithBundleIdentifier:(id)a0 applicationState:(unsigned long long)a1;
- (id)_enableBackgroundTimerWithBundleIdentifier:(id)a0;
- (void)_removeBackgroundTimer:(id)a0;
- (void)_backgroundTimerDidExpire:(id)a0;

@end
