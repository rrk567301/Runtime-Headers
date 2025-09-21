@class NSString;

@interface AUNotificationRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *accessoryName;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initUnplugReplugNotificationWithAccessoryName:(id)a0;

@end
