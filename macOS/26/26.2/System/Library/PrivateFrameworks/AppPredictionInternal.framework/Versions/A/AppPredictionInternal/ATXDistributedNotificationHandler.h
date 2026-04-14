@class NSMutableSet;

@interface ATXDistributedNotificationHandler : NSObject {
    NSMutableSet *_recentNotifications;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notificationFired:(id)a0;
- (void)_repostNotificationFromSource:(id)a0 name:(id)a1 userInfo:(id)a2;
- (void)registerXPCHandler;
- (id)init;
- (void)_pruneOldRecents;
- (void)dealloc;

@end
