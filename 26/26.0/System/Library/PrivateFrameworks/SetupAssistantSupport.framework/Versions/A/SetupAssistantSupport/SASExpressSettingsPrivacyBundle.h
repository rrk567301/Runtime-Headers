@class NSString;

@interface SASExpressSettingsPrivacyBundle : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long contentVersion;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
