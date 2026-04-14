@class NSString, NSData;

@interface TPPBCustodianRecoveryKey : PBCodable <NSCopying> {
    struct { unsigned char kind : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasSigningPublicKey;
@property (retain, nonatomic) NSData *signingPublicKey;
@property (readonly, nonatomic) BOOL hasEncryptionPublicKey;
@property (retain, nonatomic) NSData *encryptionPublicKey;
@property (nonatomic) BOOL hasKind;
@property (nonatomic) int kind;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)kindAsString:(int)a0;
- (int)StringAsKind:(id)a0;
- (id)dictionaryRepresentation;

@end
