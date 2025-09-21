@interface HMDHH2AutoMigrationEligibilityResult : HMFObject

@property (readonly, getter=isEligible) char eligible;
@property (readonly) unsigned long long status;
@property (readonly) unsigned long long iCloudAccountStatus;
@property (readonly) unsigned long long unsupportedDevices;
@property (readonly) char hasOnlyEmptyHomes;
@property (readonly) unsigned long long numberOwnedNonEmptyHomes;
@property (readonly) unsigned long long numberUnownedSharedHomes;
@property (readonly) unsigned long long numberOwnedSharedHomes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithStatus:(unsigned long long)a0 iCloudAccountStatus:(unsigned long long)a1 unsupportedDevices:(unsigned long long)a2 hasOnlyEmptyHomes:(char)a3 numberOwnedNonEmptyHomes:(unsigned long long)a4 numberUnownedSharedHomes:(unsigned long long)a5 numberOwnedSharedHomes:(unsigned long long)a6;

@end
