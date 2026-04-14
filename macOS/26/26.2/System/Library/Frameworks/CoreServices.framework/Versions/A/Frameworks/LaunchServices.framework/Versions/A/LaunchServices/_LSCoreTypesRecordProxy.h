@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;
+ (id)description;

- (id)localizedName;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)supportedIntents;
- (void)detach;
- (unsigned int)platform;
- (BOOL)isProfileValidated;
- (id)initWithCoder:(id)a0;
- (id)_loadRealRecord;
- (id)localizedShortName;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)signerOrganization;
- (id)UIBackgroundModes;
- (BOOL)isFreeProfileValidated;
- (unsigned long long)hash;
- (id)dataContainerURL;
- (id)machOUUIDs;
- (id)URL;
- (id)entitlements;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (BOOL)supportsNowPlaying;
- (void)encodeWithCoder:(id)a0;
- (id)teamIdentifier;
- (id)signerIdentity;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)intentDefinitionURLs;
- (id)debugDescription;
- (BOOL)wasBuiltWithThreadSanitizer;
- (id)replacementObjectForCoder:(id)a0;
- (id)managedPersonas;
- (BOOL)isKindOfClass:(Class)a0;
- (id)supportedIntentMediaCategories;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isUPPValidated;
- (void).cxx_destruct;
- (char)developerType;
- (id)executableURL;
- (id)applicationIdentifier;
- (void)forwardInvocation:(id)a0;
- (Class)classForKeyedArchiver;
- (id)bundleIdentifier;
- (id)WKBackgroundModes;
- (id)description;
- (id)_personasWithAttributes;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)associatedPersonas;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (id)accentColorName;
- (id)init;
- (id)intentsRestrictedWhileLocked;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)serviceRecords;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)SDKVersion;

@end
