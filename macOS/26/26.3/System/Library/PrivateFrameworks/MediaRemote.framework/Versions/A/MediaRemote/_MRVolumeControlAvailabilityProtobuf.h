@interface _MRVolumeControlAvailabilityProtobuf : PBCodable <NSCopying> {
    struct { unsigned char volumeCapabilities : 1; unsigned char volumeControlAvailable : 1; } _has;
}

@property (nonatomic) BOOL hasVolumeControlAvailable;
@property (nonatomic) BOOL volumeControlAvailable;
@property (nonatomic) BOOL hasVolumeCapabilities;
@property (nonatomic) int volumeCapabilities;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
