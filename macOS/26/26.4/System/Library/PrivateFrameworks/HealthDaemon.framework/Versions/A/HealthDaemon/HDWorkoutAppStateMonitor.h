@class NSString, FBSDisplayLayoutMonitor;
@protocol HDWorkoutAppStateMonitorDelegate;

@interface HDWorkoutAppStateMonitor : NSObject {
    NSString *_bundleIdentifier;
    FBSDisplayLayoutMonitor *_layoutMonitor;
}

@property (readonly, nonatomic) BOOL appIsActive;
@property (weak, nonatomic) id<HDWorkoutAppStateMonitorDelegate> delegate;

+ (void)launchWorkoutAppIfNeededWithFitnessMachineSessionUUID:(id)a0;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFirstPartyWorkoutApp;

@end
