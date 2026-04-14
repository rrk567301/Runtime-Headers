@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *containerPrivacySettings;

+ (Class)containerPrivacySettingsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addContainerPrivacySettings:(id)a0;
- (void)clearContainerPrivacySettings;
- (id)containerPrivacySettingsAtIndex:(unsigned long long)a0;
- (unsigned long long)containerPrivacySettingsCount;

@end
