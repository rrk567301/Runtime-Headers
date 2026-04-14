@class NSData;

@interface NTPBBlindedToken : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *token;
@property (nonatomic) unsigned int keyId;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
