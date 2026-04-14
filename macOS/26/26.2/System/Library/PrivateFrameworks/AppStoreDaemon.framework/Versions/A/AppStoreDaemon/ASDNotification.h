@class NSString, NSDictionary;

@interface ASDNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) NSDictionary *userInfo;

+ (id)notificationWithName:(id)a0 userInfo:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 userInfo:(id)a1;

@end
