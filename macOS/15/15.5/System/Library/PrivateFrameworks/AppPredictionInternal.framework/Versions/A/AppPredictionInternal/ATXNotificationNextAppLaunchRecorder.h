@class NSString, OS_dispatch_queue;

@interface ATXNotificationNextAppLaunchRecorder : NSObject {
    void /* unknown type, empty encoding */ appLaunchPublisherProvider;
    void /* unknown type, empty encoding */ defaultsKeyPrefix;
    void /* unknown type, empty encoding */ installedAppsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_queue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appLaunchTimestampKey;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ defaults;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ dataStore;
@property (nonatomic, copy) id /* block */ appLaunchPublisherProvider;
@property (nonatomic, readonly) NSString *defaultsKeyPrefix;
@property (nonatomic, readonly) id /* block */ installedAppsProvider;
@property (nonatomic, retain) OS_dispatch_queue *queue;
@property (nonatomic, copy) NSString *appLaunchTimestampKey;

- (id)init;
- (void).cxx_destruct;
- (void)resetDefaults;
- (id)initWithDefaults:(id)a0 dataStore:(id)a1 defaultsKeyPrefix:(id)a2 appLaunchPublisherProvider:(id /* block */)a3 installedAppsProvider:(id /* block */)a4;
- (void)updateNotificationsWithNextAppLaunch;

@end
