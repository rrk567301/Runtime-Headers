@class NSString;

@interface STAskToManageContactsApprovedResponseReceivedUserNotificationContext : STUserNotificationContext

@property (copy, nonatomic) NSString *childName;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithChildName:(id)a0;

@end
