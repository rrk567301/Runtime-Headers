@class NSString, ATXCustomIntentDescription;

@interface ATXTimeScheduledWidget : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *container;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *extensionId;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) ATXCustomIntentDescription *intentDescription;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainer:(id)a0 kind:(id)a1 extensionId:(id)a2 family:(long long)a3;
- (id)initWithContainer:(id)a0 kind:(id)a1 extensionId:(id)a2 family:(long long)a3 intentDescription:(id)a4;
- (char)isEqualToATXTimeScheduledWidget:(id)a0;

@end
