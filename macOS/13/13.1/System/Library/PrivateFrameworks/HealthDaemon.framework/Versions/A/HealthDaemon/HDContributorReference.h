@class NSNumber, NSUUID;

@interface HDContributorReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long contributorType;
@property (readonly, copy, nonatomic) NSNumber *persistentID;
@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (id)contributorReferenceForPersistentID:(id)a0;
+ (id)contributorReferenceForNoContributor;
+ (id)contributorReferenceForPrimaryUser;
+ (id)contributorReferenceForOtherUserWithUUID:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
