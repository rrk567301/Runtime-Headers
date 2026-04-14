@interface ATXTime : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long hour;
@property (readonly, nonatomic) long long minute;

- (id)initWithHour:(long long)a0 minute:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXTime:(id)a0;

@end
