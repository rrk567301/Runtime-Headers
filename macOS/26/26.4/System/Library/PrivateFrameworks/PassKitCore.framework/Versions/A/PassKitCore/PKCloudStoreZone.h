@class NSString, NSSet;

@interface PKCloudStoreZone : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSString *ownerName;
@property (nonatomic) long long scope;
@property (retain, nonatomic) NSString *zoneSubscriptionIdentifier;
@property (copy, nonatomic) NSSet *shareParticipants;

+ (void)zoneValueForZoneName:(id)a0 outZoneType:(unsigned long long *)a1 outAccountIdentifier:(id *)a2 altDSID:(id *)a3;

- (id)recordZone;
- (id)shareParticipantWithHandle:(id)a0;
- (id)zoneID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithZoneID:(id)a0 containerName:(id)a1 scope:(long long)a2;
- (unsigned long long)zoneType;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)shareParticipantWithLookupInfo:(id)a0;
- (void).cxx_destruct;
- (id)zoneSubscription;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
