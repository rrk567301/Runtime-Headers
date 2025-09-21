@class COClusterMember, COClusterRole;

@interface COClusterMemberRoleSnapshot : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isStale) char stale;
@property (readonly, nonatomic) COClusterMember *member;
@property (readonly, nonatomic) COClusterRole *role;

+ (id)snapshotWithParticipantRoleForMember:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToSnapshot:(id)a0;
- (id)initWithMember:(id)a0 role:(id)a1;

@end
