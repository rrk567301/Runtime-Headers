@interface TVRMSSetVolumeMessage : PBCodable <NSCopying> {
    struct { unsigned char sessionIdentifier : 1; unsigned char volume : 1; } _has;
}

@property (nonatomic) BOOL hasVolume;
@property (nonatomic) float volume;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
