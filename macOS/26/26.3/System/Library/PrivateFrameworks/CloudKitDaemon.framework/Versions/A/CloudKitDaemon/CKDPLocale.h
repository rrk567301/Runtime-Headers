@class NSString;

@interface CKDPLocale : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL hasRegionCode;
@property (retain, nonatomic) NSString *regionCode;

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

@end
