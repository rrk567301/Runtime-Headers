@class NSData;

@interface PCSEnvelopedKeyMaterial : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) char hasMasterKeyId;
@property (retain, nonatomic) NSData *masterKeyId;
@property (readonly, nonatomic) char hasEncryptedSeed;
@property (retain, nonatomic) NSData *encryptedSeed;

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
- (int)StringAsVersion:(id)a0;
- (id)versionAsString:(int)a0;

@end
