@class NSUUID;

@interface CXJoinCallParticipantCluster : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) long long type;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 type:(long long)a1;
- (BOOL)isEqualToJoinCallParticipantCluster:(id)a0;

@end
