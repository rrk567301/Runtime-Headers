@interface COClusterRole : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long flags;

+ (id)roleForCoordinator;
+ (id)roleForParticipant;
+ (id)roleForUnknown;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isPrimary;
- (char)isUnknown;
- (id)initWithRoleFlags:(unsigned long long)a0;
- (char)isEqualToRole:(id)a0;
- (char)satisfiesRole:(id)a0;

@end
