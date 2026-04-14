@class NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface SGPreferenceManager : NSObject {
    NSUserDefaults *_suggestionsDefaults;
    NSObject<OS_dispatch_queue> *_settingsUpdateQueue;
    BOOL _isQueueSuspended;
}

+ (id)defaultManager;

- (int)registerBlock:(id /* block */)a0;
- (void)_resumeNotificationQueue;
- (void).cxx_destruct;
- (id)init;
- (void)_suspendNotificationQueue;

@end
