@class NSString;

@interface CKDPLocale : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) char hasRegionCode;
@property (retain, nonatomic) NSString *regionCode;

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
