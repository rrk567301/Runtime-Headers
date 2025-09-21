@class NSString, NSArray;

@interface UARPEndpointPersonalityMobileAsset : UARPEndpointPersonality

@property (readonly) NSString *serialNumber;
@property (readonly) NSString *hwFusing;
@property (readonly) NSString *appleModelNumber;
@property (readonly) NSString *hwRevision;
@property (readonly) NSString *activeVersion;
@property (readonly) NSString *friendlyName;
@property (readonly) NSArray *partnerSerialNumbers;
@property (readonly) NSString *mobileAssetAppleModelNumber;
@property (readonly) BOOL softwareUpdateAsset;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)setMobileAssetAppleModelNumber:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setFriendlyName:(id)a0;
- (void)setHwFusingType:(id)a0;
- (void)setHwRevision:(id)a0;
- (void)setPartnerSerialNumbers:(id)a0;
- (void)setSoftwareUpdateAsset:(BOOL)a0;
- (void)setActiveVersion:(id)a0;
- (id)initWithAppleModelNumber:(id)a0 serialNumber:(id)a1 hwFusing:(id)a2 domain:(id)a3;
- (BOOL)isPersonalityMatch:(id)a0;

@end
