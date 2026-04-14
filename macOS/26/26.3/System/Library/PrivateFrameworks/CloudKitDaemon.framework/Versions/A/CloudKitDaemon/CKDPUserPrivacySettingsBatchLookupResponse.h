@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *containerPrivacySettings;

+ (Class)containerPrivacySettingsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addContainerPrivacySettings:(id)a0;
- (void)clearContainerPrivacySettings;
- (id)containerPrivacySettingsAtIndex:(unsigned long long)a0;
- (unsigned long long)containerPrivacySettingsCount;

@end
