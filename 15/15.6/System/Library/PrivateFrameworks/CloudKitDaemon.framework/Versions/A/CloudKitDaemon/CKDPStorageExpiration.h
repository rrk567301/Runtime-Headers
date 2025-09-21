@interface CKDPStorageExpiration : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char expirationTime : 1; unsigned char operationType : 1; } _has;
}

@property (nonatomic) char hasOperationType;
@property (nonatomic) int operationType;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) char hasExpirationTime;
@property (nonatomic) double expirationTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsOperationType:(id)a0;
- (id)operationTypeAsString:(int)a0;

@end
