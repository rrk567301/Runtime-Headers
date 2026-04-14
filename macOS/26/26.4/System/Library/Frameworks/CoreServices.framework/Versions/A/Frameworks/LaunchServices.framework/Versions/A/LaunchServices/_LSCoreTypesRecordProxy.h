@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;
+ (id)description;

- (id)_loadRealRecord;
- (unsigned int)platform;
- (id)SDKVersion;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)debugDescription;
- (id)dataContainerURL;
- (id)accentColorName;
- (id)localizedShortName;
- (id)associatedPersonas;
- (BOOL)conformsToProtocol:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (id)managedPersonas;
- (id)signerIdentity;
- (id)executableURL;
- (void)detach;
- (BOOL)isFreeProfileValidated;
- (id)URL;
- (id)signerOrganization;
- (void)encodeWithCoder:(id)a0;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (BOOL)supportsNowPlaying;
- (id)intentsRestrictedWhileLocked;
- (BOOL)isKindOfClass:(Class)a0;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)serviceRecords;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (void).cxx_destruct;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)machOUUIDs;
- (BOOL)isUPPValidated;
- (id)intentDefinitionURLs;
- (unsigned long long)hash;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (id)supportedIntentMediaCategories;
- (id)_personasWithAttributes;
- (id)init;
- (id)teamIdentifier;
- (id)WKBackgroundModes;
- (BOOL)wasBuiltWithThreadSanitizer;
- (id)entitlements;
- (id)description;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)initWithCoder:(id)a0;
- (id)applicationIdentifier;
- (id)bundleIdentifier;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)supportedIntents;
- (id)UIBackgroundModes;
- (BOOL)isProfileValidated;
- (id)localizedName;
- (char)developerType;

@end
