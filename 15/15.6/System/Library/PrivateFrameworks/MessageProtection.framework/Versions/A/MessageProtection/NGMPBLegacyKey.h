@class NSData;

@interface NGMPBLegacyKey : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *encryptionKey;
@property (retain, nonatomic) NSData *signingKey;

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
