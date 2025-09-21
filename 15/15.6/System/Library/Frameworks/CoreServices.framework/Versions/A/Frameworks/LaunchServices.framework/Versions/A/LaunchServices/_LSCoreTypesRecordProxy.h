@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (id)description;
+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (char)conformsToProtocol:(id)a0;
- (id)debugDescription;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (char)isMemberOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)URL;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)SDKVersion;
- (id)_loadRealRecord;
- (id)accentColorName;
- (id)managedPersonas;
- (id)UIBackgroundModes;
- (id)WKBackgroundModes;
- (id)_personasWithAttributes;
- (id)applicationIdentifier;
- (id)associatedPersonas;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)bundleIdentifier;
- (Class)classForKeyedArchiver;
- (id)dataContainerURL;
- (void)detach;
- (char)developerType;
- (id)entitlements;
- (id)executableURL;
- (id)intentDefinitionURLs;
- (id)intentsRestrictedWhileLocked;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (char)isFreeProfileValidated;
- (char)isProfileValidated;
- (char)isUPPValidated;
- (id)localizedName;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (id)localizedShortName;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)machOUUIDs;
- (unsigned int)platform;
- (id)replacementObjectForCoder:(id)a0;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)serviceRecords;
- (id)signerIdentity;
- (id)signerOrganization;
- (id)supportedIntentMediaCategories;
- (id)supportedIntents;
- (char)supportsNowPlaying;
- (id)teamIdentifier;
- (char)wasBuiltWithThreadSanitizer;

@end
