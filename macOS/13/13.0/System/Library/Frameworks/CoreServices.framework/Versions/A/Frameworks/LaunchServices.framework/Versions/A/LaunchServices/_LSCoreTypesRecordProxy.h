@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (id)description;
+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)description;
- (id)debugDescription;
- (id)init;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)URL;
- (char)developerType;
- (id)managedPersonas;
- (id)supportedIntents;
- (id)intentsRestrictedWhileLocked;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (id)supportedIntentMediaCategories;
- (id)bundleIdentifier;
- (void)detach;
- (id)applicationIdentifier;
- (id)dataContainerURL;
- (unsigned int)platform;
- (id)signerOrganization;
- (id)signerIdentity;
- (id)UIBackgroundModes;
- (id)teamIdentifier;
- (id)entitlements;
- (id)machOUUIDs;
- (id)localizedName;
- (id)localizedShortName;
- (id)serviceRecords;
- (id)executableURL;
- (id)SDKVersion;
- (BOOL)wasBuiltWithThreadSanitizer;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (BOOL)isProfileValidated;
- (BOOL)isUPPValidated;
- (BOOL)isFreeProfileValidated;
- (id)accentColorName;
- (id)WKBackgroundModes;
- (BOOL)supportsNowPlaying;
- (id)intentDefinitionURLs;
- (id)_loadRealRecord;
- (id)replacementObjectForCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)replacementObjectForKeyedArchiver:(id)a0;

@end
