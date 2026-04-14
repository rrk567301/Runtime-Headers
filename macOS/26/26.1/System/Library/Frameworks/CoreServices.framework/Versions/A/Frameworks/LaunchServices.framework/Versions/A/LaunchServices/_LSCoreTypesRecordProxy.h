@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (id)description;
+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (id)localizedShortName;
- (BOOL)isProfileValidated;
- (id)entitlements;
- (id)associatedPersonas;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)applicationIdentifier;
- (id)supportedIntentMediaCategories;
- (id)managedPersonas;
- (unsigned long long)hash;
- (id)dataContainerURL;
- (id)serviceRecords;
- (id)UIBackgroundModes;
- (BOOL)isUPPValidated;
- (BOOL)conformsToProtocol:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)supportsNowPlaying;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (char)developerType;
- (id)WKBackgroundModes;
- (id)machOUUIDs;
- (void)forwardInvocation:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (id)accentColorName;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (id)intentsRestrictedWhileLocked;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)supportedIntents;
- (Class)classForCoder;
- (void)detach;
- (void)encodeWithCoder:(id)a0;
- (id)signerIdentity;
- (BOOL)isKindOfClass:(Class)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (unsigned int)platform;
- (id)URL;
- (id)localizedName;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)description;
- (id)teamIdentifier;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)intentDefinitionURLs;
- (Class)classForKeyedArchiver;
- (id)initWithCoder:(id)a0;
- (id)SDKVersion;
- (id)_personasWithAttributes;
- (void).cxx_destruct;
- (id)signerOrganization;
- (BOOL)isFreeProfileValidated;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (BOOL)wasBuiltWithThreadSanitizer;
- (id)bundleIdentifier;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (id)executableURL;
- (id)_loadRealRecord;
- (id)init;

@end
