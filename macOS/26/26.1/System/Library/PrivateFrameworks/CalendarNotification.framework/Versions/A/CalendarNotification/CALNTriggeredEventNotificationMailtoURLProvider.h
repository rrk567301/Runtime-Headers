@protocol CALNMailAccounts;

@interface CALNTriggeredEventNotificationMailtoURLProvider : NSObject

@property (readonly, nonatomic) id<CALNMailAccounts> mailAccounts;

- (void).cxx_destruct;
- (id)mailtoURLForEvent:(id)a0;
- (id)initWithMailAccounts:(id)a0;

@end
