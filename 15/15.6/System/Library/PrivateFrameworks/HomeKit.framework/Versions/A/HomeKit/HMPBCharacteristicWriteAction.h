@class NSData, HMPBCharacteristicReference;

@interface HMPBCharacteristicWriteAction : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasActionUUID;
@property (retain, nonatomic) NSData *actionUUID;
@property (readonly, nonatomic) char hasTargetValue;
@property (retain, nonatomic) NSData *targetValue;
@property (readonly, nonatomic) char hasCharacteristicReference;
@property (retain, nonatomic) HMPBCharacteristicReference *characteristicReference;

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
