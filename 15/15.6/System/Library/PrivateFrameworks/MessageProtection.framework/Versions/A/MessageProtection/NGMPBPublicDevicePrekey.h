@class NSData;

@interface NGMPBPublicDevicePrekey : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *prekey;
@property (retain, nonatomic) NSData *prekeySignature;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasTetraPreKey;
@property (retain, nonatomic) NSData *tetraPreKey;

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
