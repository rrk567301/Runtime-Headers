@class NSUserNotificationCenter, NSMutableArray;

@interface CalUserNotificationCenterCache : NSObject {
    NSUserNotificationCenter *_center;
}

@property (retain, nonatomic) NSMutableArray *scheduledNotifications;
@property (retain, nonatomic) NSMutableArray *deliveredNotifications;
@property (retain, nonatomic) NSMutableArray *displayedNotifications;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithCenter:(id)a0;
- (void)removeCachedDeliveredNotificationWithID:(id)a0;

@end
