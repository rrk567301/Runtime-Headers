@class NSString;

@interface SASExpressSettingsPrivacyBundle : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long contentVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
