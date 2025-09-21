@class NSUUID, NSString, NSArray;

@interface HDMockIDSDevice : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *nanoRegistryPairingID;
@property (retain, nonatomic) NSUUID *nsuuid;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *uniqueIDOverride;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *productBuildVersion;
@property (copy, nonatomic) NSString *buildType;
@property (nonatomic) long long deviceType;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *modelNumber;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSString *regionCode;
@property (copy, nonatomic) NSArray *identities;
@property (readonly, nonatomic) long long relationship;
@property (copy, nonatomic) NSString *electrocardiogramVersion;
@property (copy, nonatomic) NSString *backgroundAtrialFibrillationVersion;
@property (readonly, nonatomic) char isLocallyPaired;
@property (readonly, nonatomic) char isDefaultPairedDevice;
@property (nonatomic) char isActive;
@property (nonatomic) char supportsCinnamonHW;
@property (nonatomic) char supportsCinnamonAntimonyGloryF;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)hd_destinationIdentifier;
- (id)hd_deviceIdentifier;
- (char)hd_isEquivalentToDevice:(id)a0;
- (id)hd_shortDescription;

@end
