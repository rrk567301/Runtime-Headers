@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (id)description;
+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (BOOL)isEqual:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)URL;
- (char)developerType;
- (id)managedPersonas;
- (void)detach;
- (id)supportedIntents;
- (id)intentsRestrictedWhileLocked;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (id)supportedIntentMediaCategories;
- (id)bundleIdentifier;
- (id)teamIdentifier;
- (id)applicationIdentifier;
- (id)dataContainerURL;
- (id)intentDefinitionURLs;
- (unsigned int)platform;
- (BOOL)isProfileValidated;
- (BOOL)isUPPValidated;
- (BOOL)isFreeProfileValidated;
- (id)signerOrganization;
- (id)signerIdentity;
- (id)UIBackgroundModes;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (id)localizedShortName;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (id)localizedName;
- (id)entitlements;
- (id)machOUUIDs;
- (id)executableURL;
- (id)SDKVersion;
- (id)serviceRecords;
- (BOOL)wasBuiltWithThreadSanitizer;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)accentColorName;
- (id)WKBackgroundModes;
- (BOOL)supportsNowPlaying;
- (id)_loadRealRecord;
- (id)replacementObjectForCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)replacementObjectForKeyedArchiver:(id)a0;

@end
