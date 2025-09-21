@class NSString, NSArray, NSURL, NSDictionary, NSNumber;

@interface ICLBundleRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *bundleShortVersion;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSString *signerIdentity;
@property (copy, nonatomic) NSNumber *signatureVersion;
@property (copy, nonatomic) NSString *signerOrganization;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (nonatomic) char codeSigningInfoNotAuthoritative;
@property (copy, nonatomic) NSString *codeInfoIdentifier;
@property (nonatomic) unsigned long long codeSignerType;
@property (nonatomic) unsigned long long profileValidationType;
@property (nonatomic) char isPlaceholder;
@property (nonatomic) char isNoLongerCompatible;
@property (nonatomic) char hasSettingsBundle;
@property (nonatomic) char isContainerized;
@property (nonatomic) char hasAppGroupContainers;
@property (nonatomic) char hasSystemContainer;
@property (nonatomic) char hasSystemGroupContainers;
@property (nonatomic) char isOnMountedDiskImage;
@property (nonatomic) unsigned long long compatibilityState;
@property (nonatomic) unsigned long long applicationType;
@property (copy, nonatomic) NSNumber *staticDiskUsage;
@property (copy, nonatomic) NSArray *counterpartIdentifiers;
@property (copy, nonatomic) NSDictionary *entitlements;
@property (copy, nonatomic) NSURL *dataContainerURL;
@property (copy, nonatomic) NSDictionary *environmentVariables;
@property (copy, nonatomic) NSDictionary *groupContainers;
@property (copy, nonatomic) NSDictionary *personasRecordMap;
@property (readonly, copy, nonatomic) NSDictionary *legacyRecordDictionary;

+ (id)bundleRecordArrayToInfoDictionaryArray:(id)a0;
+ (id)infoDictionaryArrayToBundleRecordArray:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLegacyRecordDictionary:(id)a0;

@end
