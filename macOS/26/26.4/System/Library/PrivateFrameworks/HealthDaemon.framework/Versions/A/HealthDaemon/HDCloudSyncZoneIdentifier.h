@class NSString, CKRecordZoneID;

@interface HDCloudSyncZoneIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneIdentifier;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) long long type;

+ (id)identifierForZone:(id)a0 container:(id)a1 scope:(long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initForZone:(id)a0 container:(id)a1;
- (id)initForZone:(id)a0 container:(id)a1 scope:(long long)a2;
- (BOOL)isEquivalentIgnoringOwnerToZone:(id)a0;
- (BOOL)isEquivalentIgnoringOwnerToZone:(id)a0 container:(id)a1;
- (BOOL)isEquivalentToZone:(id)a0 container:(id)a1;

@end
