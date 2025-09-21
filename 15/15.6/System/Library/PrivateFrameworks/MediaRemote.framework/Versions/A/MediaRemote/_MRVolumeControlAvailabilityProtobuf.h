@interface _MRVolumeControlAvailabilityProtobuf : PBCodable <NSCopying> {
    struct { unsigned char volumeCapabilities : 1; unsigned char volumeControlAvailable : 1; } _has;
}

@property (nonatomic) char hasVolumeControlAvailable;
@property (nonatomic) char volumeControlAvailable;
@property (nonatomic) char hasVolumeCapabilities;
@property (nonatomic) int volumeCapabilities;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
