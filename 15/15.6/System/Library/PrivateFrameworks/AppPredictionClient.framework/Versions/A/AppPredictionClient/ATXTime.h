@interface ATXTime : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long hour;
@property (readonly, nonatomic) long long minute;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHour:(long long)a0 minute:(long long)a1;
- (char)isEqualToATXTime:(id)a0;

@end
