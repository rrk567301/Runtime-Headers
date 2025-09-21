@class OS_dispatch_queue, NSString, ATXNotificationAndSuggestionDatastore, ATXAppInFocusStream, NSUserDefaults;

@interface ATXNotificationNextAppLaunchRecorder : NSObject {
    void /* function */ defaultsKeyPrefix;
    void /* function */ installedAppsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_queue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appLaunchTimestampKey;
}

@property (nonatomic, readonly) NSUserDefaults *defaults;
@property (nonatomic, readonly) ATXNotificationAndSuggestionDatastore *dataStore;
@property (nonatomic, retain) ATXAppInFocusStream *appInFocusStream;
@property (nonatomic, copy) NSString *defaultsKeyPrefix;
@property (nonatomic, copy) id /* block */ installedAppsProvider;
@property (nonatomic, retain) OS_dispatch_queue *queue;
@property (nonatomic, copy) NSString *appLaunchTimestampKey;

- (id)init;
- (void).cxx_destruct;
- (void)resetDefaults;
- (id)initWithDefaults:(id)a0 dataStore:(id)a1;
- (void)updateNotificationsWithNextAppLaunch;

@end
