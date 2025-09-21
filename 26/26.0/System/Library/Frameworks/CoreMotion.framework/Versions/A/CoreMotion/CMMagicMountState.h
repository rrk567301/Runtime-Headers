@interface CMMagicMountState : CMLogItem

@property (readonly, nonatomic, getter=isMounted) BOOL mounted;
@property (readonly, nonatomic) long long mountStatus;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMountStatus:(long long)a0 timestamp:(double)a1;

@end
