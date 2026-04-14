@class CALNUNIconProvider;

@interface CALNUNNotificationIconMapper : NSObject

@property (readonly, nonatomic) CALNUNIconProvider *iconProvider;

- (id)unNotificationIconFromIconIdentifier:(id)a0;
- (id)iconIdentifierFromUNNotificationIcon:(id)a0;
- (void).cxx_destruct;
- (id)initWithIconProvider:(id)a0;

@end
