@interface COClusterRole : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long flags;

+ (id)roleForCoordinator;
+ (id)roleForParticipant;
+ (id)roleForUnknown;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isUnknown;
- (BOOL)isPrimary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRoleFlags:(unsigned long long)a0;
- (BOOL)isEqualToRole:(id)a0;
- (BOOL)satisfiesRole:(id)a0;

@end
