@class NSString, NSData;

@interface TPPBCustodianRecoveryKey : PBCodable <NSCopying> {
    struct { unsigned char kind : 1; } _has;
}

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasSigningPublicKey;
@property (retain, nonatomic) NSData *signingPublicKey;
@property (readonly, nonatomic) char hasEncryptionPublicKey;
@property (retain, nonatomic) NSData *encryptionPublicKey;
@property (nonatomic) char hasKind;
@property (nonatomic) int kind;

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
- (int)StringAsKind:(id)a0;
- (id)kindAsString:(int)a0;

@end
