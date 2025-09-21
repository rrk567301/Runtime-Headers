@class NSData, NSArray, NSString, NSURL, NSDate, NSNumber, ICLSinfInfo;

@interface ICLPlaceholderRecord : ICLBundleRecord <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSURL *bundleContainerURL;
@property (nonatomic) char isOnDemandInstallCapable;
@property (copy, nonatomic) NSArray *parentIdentifiers;
@property (copy, nonatomic) NSString *appManagementDomain;
@property (nonatomic) char isSwiftPlaygroundsApp;
@property (nonatomic) char isDeletable;
@property (nonatomic) char isBeta;
@property (nonatomic) unsigned long long placeholderFailureReason;
@property (copy, nonatomic) NSString *alternateIconName;
@property (copy, nonatomic) NSDate *installDate;
@property (copy, nonatomic) NSNumber *lsInstallType;
@property (nonatomic) char isWebNotificationBundle;
@property (copy, nonatomic) ICLSinfInfo *sinfInfo;
@property (copy, nonatomic) NSData *uniqueInstallID;
@property (copy, nonatomic) NSData *installSessionID;
@property (copy, nonatomic) NSString *linkedParentBundleID;
@property (nonatomic) char isMarketplace;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLegacyRecordDictionary:(id)a0;
- (id)legacyRecordDictionary;

@end
