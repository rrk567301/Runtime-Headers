@class NSString, NSURL, NSDictionary;

@interface OSPDevice : NSObject

@property char isX86;
@property char personalizationEnabled;
@property char globalSigningEnabled;
@property char supportsImage4;
@property (retain) NSString *image4DigestType;
@property unsigned int boardID;
@property unsigned int chipID;
@property unsigned long long ecid;
@property (retain) NSString *hardwareModel;
@property char productionMode;
@property char effectiveProductionMode;
@property char securityMode;
@property char effectiveSecurityMode;
@property unsigned int securityDomain;
@property char targetDiskMode;
@property (retain) NSURL *mountPointURL;
@property (retain) NSString *buildVersion;
@property (retain) NSString *bridgeVersion;
@property char engineeringUseOnlyUnit;
@property char internalUseOnlyUnit;
@property unsigned int cryptex1ProductClass;
@property (retain) NSDictionary *apSoftwareCoprocessorParameters;
@property (readonly) NSDictionary *apParameters;

+ (id)deviceWithBoardID:(unsigned int)a0 chipID:(unsigned int)a1 hardwareModel:(id)a2;
+ (id)deviceWithDummyIdentity;
+ (id)deviceWithDummyNonX86Identity;
+ (id)deviceWithPersonalizationEnabled:(char)a0 globalSigningEnabled:(char)a1;
+ (id)deviceWithRunningSystem;
+ (id)deviceWithTDMBackedVolumeMountPoint:(id)a0;
+ (id)deviceWithVariantDictionary:(id)a0;
+ (id)deviceWithVolumeMountPoint:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_assignDummyECID;
- (id)_getBridgeVersion;
- (id)_getBuildVersion;
- (id)_getHWTargetSysctl;

@end
