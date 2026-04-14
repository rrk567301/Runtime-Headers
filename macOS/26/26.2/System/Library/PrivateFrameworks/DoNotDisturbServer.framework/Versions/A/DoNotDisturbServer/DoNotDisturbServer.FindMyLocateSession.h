@class _TtC18DoNotDisturbServer11DNDFMDevice, NSError;

@interface DoNotDisturbServer.FindMyLocateSession : NSObject {
    void /* function */ meDeviceUpdateCallback;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ isInitialized;
    void /* unknown type, empty encoding */ initContinuations;
    void /* unknown type, empty encoding */ preferenceChangesTask;
}

@property (nonatomic, copy) id /* block */ meDeviceUpdateCallback;

- (void).cxx_destruct;
- (id)init;
- (void)getActiveLocationSharingDeviceWithCompletionHandler:(void (^)(_TtC18DoNotDisturbServer11DNDFMDevice *, NSError *))a0;
- (void)startMonitoringPreferencesChangesWithCompletionHandler:(void (^)(NSError *))a0;
- (void)stopMonitoringPreferenceChangesWithCompletionHandler:(void (^)(NSError *))a0;

@end
