@class NSData;

@interface NGMPBPublicDevicePrekey : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *prekey;
@property (retain, nonatomic) NSData *prekeySignature;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasTetraPreKey;
@property (retain, nonatomic) NSData *tetraPreKey;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
