@interface COClusterRole : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long flags;

+ (id)roleForCoordinator;
+ (id)roleForParticipant;
+ (id)roleForUnknown;

- (BOOL)isPrimary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isUnknown;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithRoleFlags:(unsigned long long)a0;
- (BOOL)isEqualToRole:(id)a0;
- (BOOL)satisfiesRole:(id)a0;

@end
