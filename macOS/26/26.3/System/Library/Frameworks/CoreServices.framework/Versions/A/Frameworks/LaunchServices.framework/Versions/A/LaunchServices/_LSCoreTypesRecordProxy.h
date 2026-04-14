@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (id)description;
+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (id)forwardingTargetForSelector:(SEL)a0;
- (char)developerType;
- (id)debugDescription;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)localizedShortName;
- (id)associatedPersonas;
- (BOOL)isProfileValidated;
- (BOOL)conformsToProtocol:(id)a0;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (id)managedPersonas;
- (id)signerOrganization;
- (void)detach;
- (id)applicationIdentifier;
- (id)machOUUIDs;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (id)UIBackgroundModes;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)localizedName;
- (id)description;
- (id)entitlements;
- (id)dataContainerURL;
- (id)init;
- (id)replacementObjectForCoder:(id)a0;
- (id)teamIdentifier;
- (unsigned int)platform;
- (BOOL)isUPPValidated;
- (id)supportedIntents;
- (BOOL)isFreeProfileValidated;
- (id)bundleIdentifier;
- (id)URL;
- (Class)classForKeyedArchiver;
- (id)SDKVersion;
- (BOOL)isKindOfClass:(Class)a0;
- (id)executableURL;
- (id)accentColorName;
- (Class)classForCoder;
- (id)serviceRecords;
- (id)intentsRestrictedWhileLocked;
- (id)signerIdentity;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)supportsNowPlaying;
- (BOOL)wasBuiltWithThreadSanitizer;
- (id)_loadRealRecord;
- (id)awakeAfterUsingCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (unsigned long long)hash;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)supportedIntentMediaCategories;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)WKBackgroundModes;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)intentDefinitionURLs;
- (id)_personasWithAttributes;

@end
