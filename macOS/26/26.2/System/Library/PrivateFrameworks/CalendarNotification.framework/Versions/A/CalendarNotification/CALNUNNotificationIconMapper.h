@class CALNUNIconProvider;

@interface CALNUNNotificationIconMapper : NSObject

@property (readonly, nonatomic) CALNUNIconProvider *iconProvider;

- (id)initWithIconProvider:(id)a0;
- (id)unNotificationIconFromIconIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)iconIdentifierFromUNNotificationIcon:(id)a0;

@end
