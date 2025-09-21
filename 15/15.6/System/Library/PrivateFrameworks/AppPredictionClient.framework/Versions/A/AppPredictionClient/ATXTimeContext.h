@class NSString;

@interface ATXTimeContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long contextType;
@property (readonly, copy, nonatomic) NSString *title;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (char)isEqualToATXTimeContext:(id)a0;

@end
