@class NSMutableSet;

@interface ATXDistributedNotificationHandler : NSObject {
    NSMutableSet *_recentNotifications;
}

+ (id)sharedInstance;

- (id)init;
- (void)_pruneOldRecents;
- (void).cxx_destruct;
- (void)_notificationFired:(id)a0;
- (void)dealloc;
- (void)_repostNotificationFromSource:(id)a0 name:(id)a1 userInfo:(id)a2;
- (void)registerXPCHandler;

@end
