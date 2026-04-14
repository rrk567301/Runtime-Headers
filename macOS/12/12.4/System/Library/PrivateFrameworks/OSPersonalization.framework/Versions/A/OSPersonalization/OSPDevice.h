@class NSString, NSURL, NSDictionary;

@interface OSPDevice : NSObject

@property BOOL isX86;
@property BOOL personalizationEnabled;
@property BOOL globalSigningEnabled;
@property BOOL supportsImage4;
@property (retain) NSString *image4DigestType;
@property unsigned int boardID;
@property unsigned int chipID;
@property unsigned long long ecid;
@property (retain) NSString *hardwareModel;
@property BOOL productionMode;
@property BOOL effectiveProductionMode;
@property BOOL securityMode;
@property BOOL effectiveSecurityMode;
@property unsigned int securityDomain;
@property BOOL targetDiskMode;
@property (retain) NSURL *mountPointURL;
@property (retain) NSString *buildVersion;
@property (retain) NSString *bridgeVersion;
@property BOOL engineeringUseOnlyUnit;
@property BOOL internalUseOnlyUnit;
@property (readonly) NSDictionary *apParameters;

+ (id)deviceWithDummyIdentity;
+ (id)deviceWithTDMBackedVolumeMountPoint:(id)a0;
+ (id)deviceWithRunningSystem;
+ (id)deviceWithVolumeMountPoint:(id)a0;
+ (id)deviceWithVariantDictionary:(id)a0;
+ (id)deviceWithDummyNonX86Identity;
+ (id)deviceWithBoardID:(unsigned int)a0 chipID:(unsigned int)a1;
+ (id)deviceWithPersonalizationEnabled:(BOOL)a0 globalSigningEnabled:(BOOL)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_getBuildVersion;
- (id)_getHWTargetSysctl;
- (id)_getBridgeVersion;

@end
