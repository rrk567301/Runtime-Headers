@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ATXBBNotificationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _debugOutput;
    NSMutableDictionary *_recentNotifications;
}

+ (id)sharedInstance;

- (id)recentNotifications;
- (void)addNotificationForBundleId:(id)a0 withPublicationDate:(id)a1;
- (id)initWithDebugOutput:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_purgeNotificationsWithMinDate:(id)a0;
- (id)init;

@end
