@protocol CALNMailAccounts;

@interface CALNTriggeredEventNotificationMailtoURLProvider : NSObject

@property (readonly, nonatomic) id<CALNMailAccounts> mailAccounts;

- (id)mailtoURLForEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithMailAccounts:(id)a0;

@end
