@class NSString, NSArray, NSData, NSDictionary, MIStoreMetadata;

@interface MIInstallOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *personaUniqueString;
@property (nonatomic) char preservePlaceholderAsParallel;
@property (nonatomic) unsigned long long installIntent;
@property (readonly, nonatomic) NSString *installTypeSummaryString;
@property (nonatomic) unsigned long long installTargetType;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, getter=isDeveloperInstall) char developerInstall;
@property (nonatomic, getter=isSystemAppInstall) char systemAppInstall;
@property (nonatomic, getter=isUserInitiated) char userInitiated;
@property (nonatomic) char waitForDeletion;
@property (nonatomic) unsigned long long lsInstallType;
@property (nonatomic) unsigned long long stashMode;
@property (nonatomic) unsigned long long installLocation;
@property (copy, nonatomic) MIStoreMetadata *iTunesMetadata;
@property (copy, nonatomic) NSData *iTunesArtworkData;
@property (copy, nonatomic) NSData *geoJSONData;
@property (copy, nonatomic) NSArray *provisioningProfiles;
@property (copy, nonatomic) NSString *alternateIconName;
@property (copy, nonatomic) NSData *sinfData;
@property (nonatomic) unsigned int sinfDataType;
@property (nonatomic) char skipWatchAppInstall;
@property (nonatomic) char skipBlacklist;
@property (nonatomic) char installForMigrator;
@property (nonatomic) char allowLocalProvisioned;
@property (nonatomic) char performAPFSClone;
@property (nonatomic) unsigned long long autoInstallOverride;
@property (copy, nonatomic) NSString *linkedParentBundleID;
@property (nonatomic) char provisioningProfileInstallFailureIsFatal;
@property (nonatomic) struct { unsigned int x0[8]; } *installationRequestorAuditToken;
@property (readonly, copy, nonatomic) NSDictionary *legacyOptionsDictionary;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLegacyOptionsDictionary:(id)a0;

@end
