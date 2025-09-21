@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (Class)classForKeyedUnarchiver;
+ (id)description;
+ (id)classFallbacksForKeyedArchiver;

- (id)localizedShortName;
- (void)detach;
- (id)replacementObjectForCoder:(id)a0;
- (id)URL;
- (id)bundleIdentifier;
- (id)intentsRestrictedWhileLocked;
- (id)debugDescription;
- (id)supportedIntents;
- (id)dataContainerURL;
- (BOOL)isKindOfClass:(Class)a0;
- (Class)classForCoder;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)serviceRecords;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)signerIdentity;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (void)encodeWithCoder:(id)a0;
- (char)developerType;
- (void)forwardInvocation:(id)a0;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (id)entitlements;
- (Class)classForKeyedArchiver;
- (id)_personasWithAttributes;
- (id)init;
- (BOOL)supportsNowPlaying;
- (id)signerOrganization;
- (id)machOUUIDs;
- (id)accentColorName;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)supportedIntentMediaCategories;
- (BOOL)isFreeProfileValidated;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (id)executableURL;
- (BOOL)isUPPValidated;
- (id)teamIdentifier;
- (id)SDKVersion;
- (id)applicationIdentifier;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)intentDefinitionURLs;
- (id)localizedName;
- (id)initWithCoder:(id)a0;
- (id)UIBackgroundModes;
- (id)managedPersonas;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)wasBuiltWithThreadSanitizer;
- (id)associatedPersonas;
- (id)WKBackgroundModes;
- (unsigned int)platform;
- (BOOL)isProfileValidated;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_loadRealRecord;
- (void).cxx_destruct;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;

@end
