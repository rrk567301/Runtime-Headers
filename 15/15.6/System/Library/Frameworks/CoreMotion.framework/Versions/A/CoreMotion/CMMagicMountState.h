@interface CMMagicMountState : CMLogItem

@property (readonly, nonatomic, getter=isMounted) char mounted;
@property (readonly, nonatomic) long long mountStatus;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMountStatus:(long long)a0 timestamp:(double)a1;

@end
