@class NSString, NSArray, NSData, NSDictionary, MIStoreMetadata;

@interface MIInstallOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *personaUniqueString;
@property (nonatomic) BOOL preservePlaceholderAsParallel;
@property (nonatomic) unsigned long long installIntent;
@property (readonly, nonatomic) NSString *installTypeSummaryString;
@property (nonatomic) BOOL preserveTargetBundleName;
@property (retain, nonatomic) NSString *bundleDirectoryName;
@property (nonatomic) unsigned long long installTargetType;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, getter=isDeveloperInstall) BOOL developerInstall;
@property (nonatomic, getter=isSystemAppInstall) BOOL systemAppInstall;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (nonatomic) BOOL waitForDeletion;
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
@property (nonatomic) BOOL skipWatchAppInstall;
@property (nonatomic) BOOL skipBlacklist;
@property (nonatomic) BOOL installForMigrator;
@property (nonatomic) BOOL allowLocalProvisioned;
@property (nonatomic) BOOL performAPFSClone;
@property (nonatomic) unsigned long long autoInstallOverride;
@property (copy, nonatomic) NSString *linkedParentBundleID;
@property (nonatomic) BOOL provisioningProfileInstallFailureIsFatal;
@property (nonatomic) struct { unsigned int x0[8]; } *installationRequestorAuditToken;
@property (copy, nonatomic) NSData *appStoreReceiptData;
@property (readonly, copy, nonatomic) NSDictionary *legacyOptionsDictionary;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLegacyOptionsDictionary:(id)a0;

@end
