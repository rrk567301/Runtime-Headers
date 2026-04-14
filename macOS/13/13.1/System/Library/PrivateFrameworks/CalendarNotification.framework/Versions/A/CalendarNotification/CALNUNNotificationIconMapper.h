@class CALNNotificationIconCache;

@interface CALNUNNotificationIconMapper : NSObject

@property (readonly, nonatomic) CALNNotificationIconCache *notificationIconCache;

- (void).cxx_destruct;
- (id)initWithNotificationIconCache:(id)a0;
- (id)iconIdentifierFromUNNotificationIcon:(id)a0;
- (id)unNotificationIconFromIconIdentifier:(id)a0;

@end
