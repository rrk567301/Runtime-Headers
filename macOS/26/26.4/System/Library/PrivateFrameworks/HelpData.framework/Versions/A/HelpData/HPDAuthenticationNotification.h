@class NSString, NSDictionary;

@interface HPDAuthenticationNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithName:(id)a0 userInfo:(id)a1;
- (id)initWithCoder:(id)a0;

@end
