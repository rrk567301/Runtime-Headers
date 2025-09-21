@class NSString, NSDictionary;

@interface ASDNotification : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) NSDictionary *userInfo;

+ (id)notificationWithName:(id)a0 userInfo:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 userInfo:(id)a1;

@end
