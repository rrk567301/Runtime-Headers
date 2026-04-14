@class NSData;

@interface ModelKeyServerAPIRawKey : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEncryptionKey;
@property (retain, nonatomic) NSData *encryptionKey;
@property (readonly, nonatomic) BOOL hasEncryptionIv;
@property (retain, nonatomic) NSData *encryptionIv;

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
