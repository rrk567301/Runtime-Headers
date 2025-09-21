@class NSString;

@interface ICQInAppAction : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) long long icqActionType;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)performAction;
- (void)performActionWithContext:(id)a0;
- (id)initWithTitle:(id)a0 type:(id)a1 icqActionType:(long long)a2;

@end
