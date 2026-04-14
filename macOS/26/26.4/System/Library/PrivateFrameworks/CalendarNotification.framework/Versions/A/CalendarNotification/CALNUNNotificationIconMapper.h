@class CALNUNIconProvider;

@interface CALNUNNotificationIconMapper : NSObject

@property (readonly, nonatomic) CALNUNIconProvider *iconProvider;

- (void).cxx_destruct;
- (id)unNotificationIconFromIconIdentifier:(id)a0;
- (id)iconIdentifierFromUNNotificationIcon:(id)a0;
- (id)initWithIconProvider:(id)a0;

@end
