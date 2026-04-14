@class NSData;

@interface NGMPBPublicDeviceIdentity : PBCodable <NSCopying> {
    struct { unsigned char tetraVersion : 1; } _has;
}

@property (retain, nonatomic) NSData *signingKey;
@property (nonatomic) BOOL hasTetraVersion;
@property (nonatomic) unsigned int tetraVersion;

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

@end
