@class NSUUID;

@interface TUConversationParticipantCluster : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) long long type;

+ (id)UUIDFromURLComponents:(id)a0 namePrefix:(id)a1;
+ (id)participantClusterFromURLComponents:(id)a0 namePrefix:(id)a1;
+ (id)queryItemName:(id)a0 prefix:(id)a1;
+ (long long)typeFromURLComponents:(id)a0 namePrefix:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 type:(long long)a1;
- (BOOL)isEqualToParticipantCluster:(id)a0;
- (id)queryItemsWithNamePrefix:(id)a0;
- (id)typeQueryItemWithNamePrefix:(id)a0;
- (id)uuidQueryItemWithNamePrefix:(id)a0;

@end
