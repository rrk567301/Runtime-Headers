@class NSNumber, NSUUID;

@interface HDContributorReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long contributorType;
@property (readonly, copy, nonatomic) NSNumber *persistentID;
@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (id)contributorReferenceForNoContributor;
+ (id)contributorReferenceForOtherUserWithUUID:(id)a0;
+ (id)contributorReferenceForPersistentID:(id)a0;
+ (id)contributorReferenceForPrimaryUser;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
