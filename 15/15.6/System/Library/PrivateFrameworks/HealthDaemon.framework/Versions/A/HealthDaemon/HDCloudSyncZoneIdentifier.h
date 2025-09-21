@class NSString, CKRecordZoneID;

@interface HDCloudSyncZoneIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneIdentifier;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) long long type;

+ (id)identifierForZone:(id)a0 container:(id)a1 scope:(long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForZone:(id)a0 container:(id)a1;
- (id)initForZone:(id)a0 container:(id)a1 scope:(long long)a2;
- (char)isEquivalentIgnoringOwnerToZone:(id)a0;
- (char)isEquivalentIgnoringOwnerToZone:(id)a0 container:(id)a1;
- (char)isEquivalentToZone:(id)a0 container:(id)a1;

@end
