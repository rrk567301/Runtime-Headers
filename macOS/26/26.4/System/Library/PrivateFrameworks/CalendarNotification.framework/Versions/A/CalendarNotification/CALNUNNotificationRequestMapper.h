@class CALNUNNotificationContentMapper, CALNUNNotificationIconMapper;

@interface CALNUNNotificationRequestMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationContentMapper *notificationContentMapper;
@property (readonly, nonatomic) CALNUNNotificationIconMapper *notificationIconMapper;

- (void).cxx_destruct;
- (id)unNotificationRequestFromCALNNotificationRequest:(id)a0;
- (id)calnNotificationRequestFromUNNotificationRequest:(id)a0;
- (id)initWithNotificationContentMapper:(id)a0 notificationIconMapper:(id)a1;

@end
