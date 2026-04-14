@class NSData;

@interface CKDPSharePcsIdentityResponse : PBCodable <NSCopying> {
    struct { unsigned char publicKeyType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPublicKey;
@property (retain, nonatomic) NSData *publicKey;
@property (nonatomic) BOOL hasPublicKeyType;
@property (nonatomic) int publicKeyType;

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
- (int)StringAsPublicKeyType:(id)a0;
- (id)publicKeyTypeAsString:(int)a0;

@end
