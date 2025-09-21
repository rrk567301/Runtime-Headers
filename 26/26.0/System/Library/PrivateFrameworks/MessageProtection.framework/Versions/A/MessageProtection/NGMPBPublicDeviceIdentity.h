@class NSData;

@interface NGMPBPublicDeviceIdentity : PBCodable <NSCopying> {
    struct { unsigned char tetraVersion : 1; } _has;
}

@property (retain, nonatomic) NSData *signingKey;
@property (nonatomic) BOOL hasTetraVersion;
@property (nonatomic) unsigned int tetraVersion;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
