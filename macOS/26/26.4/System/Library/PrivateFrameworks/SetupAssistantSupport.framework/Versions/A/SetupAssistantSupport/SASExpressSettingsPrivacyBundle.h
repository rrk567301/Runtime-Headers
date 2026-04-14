@class NSString;

@interface SASExpressSettingsPrivacyBundle : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long contentVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
