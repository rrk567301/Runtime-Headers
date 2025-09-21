@class HMPBServiceReference, NSData;

@interface HMPBCharacteristicReference : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasServiceReference;
@property (retain, nonatomic) HMPBServiceReference *serviceReference;
@property (readonly, nonatomic) char hasUniqueIdentifier;
@property (retain, nonatomic) NSData *uniqueIdentifier;

+ (id)characteristicReferenceWithCharacteristic:(id)a0;
+ (id)characteristicReferenceWithData:(id)a0;

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
