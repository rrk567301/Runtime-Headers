@class RBSProcessIdentity, RBProcess, NSDictionary, RBSProcessIdentifier, RBSMachPort, NSString, RBSProcessHandle, LSApplicationIdentity, RBSAssertionIdentifier, NSSet, NSArray, NSNumber, NSUUID;

@interface RBSLaunchContext : NSObject <RBSXPCSecureCoding, NSCopying> {
    RBSMachPort *_dextCheckInPort;
}

@property (nonatomic) unsigned int auid;
@property (retain, nonatomic) RBProcess *hostProcess;
@property (nonatomic) unsigned char initialRole;
@property (copy, nonatomic) NSString *homeDirectory;
@property (copy, nonatomic) NSString *tmpDirectory;
@property (nonatomic, getter=isTesting) char testing;
@property (nonatomic) char calculatedContainerIdentifier;
@property (copy, nonatomic) NSDictionary *launchRequestIdentifierToMachNameMap;
@property (retain, nonatomic) RBSAssertionIdentifier *launchAssertionIdentifier;
@property (copy, nonatomic, setter=_setOverrideExecutablePath:) NSString *_overrideExecutablePath;
@property (copy, nonatomic, setter=_setAdditionalMachServices:) NSArray *_additionalMachServices;
@property (copy, nonatomic, setter=_setAdditionalEnvironment:) NSDictionary *_additionalEnvironment;
@property (copy, nonatomic) RBSProcessIdentifier *requiredExistingProcess;
@property (copy, nonatomic) NSUUID *requiredCacheUUID;
@property (copy, nonatomic) NSNumber *requiredSequenceNumber;
@property (copy, nonatomic) NSNumber *preventContainerization;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (nonatomic) BOOL lsManageRoleOnly;
@property (nonatomic) unsigned long long lsSpawnFlags;
@property (nonatomic) unsigned short lsUMask;
@property (nonatomic) unsigned int lsInitialRole;
@property (nonatomic) unsigned int lsPersona;
@property (copy, nonatomic) NSString *beforeTranslocationBundlePath;
@property (copy, nonatomic) NSArray *lsBinpref;
@property (copy, nonatomic) NSArray *lsBinprefSubtype;
@property (nonatomic) int hostPid;
@property (retain, nonatomic) NSDictionary *extensionOverlay;
@property (retain, nonatomic) NSUUID *oneShotUUID;
@property (nonatomic) char forceSubmit;
@property (nonatomic) unsigned int dextCheckInPort;
@property (readonly, nonatomic) RBSProcessHandle *requestorHandle;
@property (copy, nonatomic) RBSProcessIdentity *identity;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) LSApplicationIdentity *appID;
@property (copy, nonatomic) NSArray *arguments;
@property (nonatomic) unsigned long long executionOptions;
@property (nonatomic) unsigned char spawnType;
@property (copy, nonatomic) NSString *executablePath;
@property (copy, nonatomic) NSArray *machServices;
@property (copy, nonatomic) NSDictionary *environment;
@property (copy, nonatomic) NSDictionary *spawnConstraint;
@property (copy, nonatomic) NSString *standardOutputPath;
@property (copy, nonatomic) NSString *standardErrorPath;
@property (copy, nonatomic) NSString *standardInPath;
@property (copy, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSSet *managedEndpointLaunchIdentifiers;
@property (copy, nonatomic) NSString *explanation;
@property (copy, nonatomic) NSString *managedPersona;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)context;
+ (id)contextWithIdentity:(id)a0;
+ (id)contextWithLSAppID:(id)a0;
+ (char)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)setRequestorHandle:(id)a0;

@end
