@class NSData;

@interface CKDPProtectionInfoKeysToRemoveProtectionInfoKey : PBCodable <NSCopying> {
    struct { unsigned char keyType : 1; } _has;
}

@property (readonly, nonatomic) char hasKeyId;
@property (retain, nonatomic) NSData *keyId;
@property (nonatomic) char hasKeyType;
@property (nonatomic) int keyType;

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
- (int)StringAsKeyType:(id)a0;
- (id)keyTypeAsString:(int)a0;

@end
