@class NSArray;

@interface ATXNotificationRankingRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *userNotifications;
@property (readonly, nonatomic) char useLLM;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserNotifications:(id)a0 useLLM:(char)a1;

@end
