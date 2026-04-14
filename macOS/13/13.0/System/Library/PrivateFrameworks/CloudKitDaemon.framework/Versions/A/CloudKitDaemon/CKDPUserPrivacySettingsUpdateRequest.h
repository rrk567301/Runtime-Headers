@class NSString, CKDPUserPrivacySettings;

@interface CKDPUserPrivacySettingsUpdateRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;

+ (id)options;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
