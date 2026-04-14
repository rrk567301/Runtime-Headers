@interface AWDHomeKitCameraStreamReconfigure : PBCodable <NSCopying> {
    struct { unsigned char reconfigurationTimestamp : 1; unsigned char resolution : 1; } _has;
}

@property (nonatomic) BOOL hasReconfigurationTimestamp;
@property (nonatomic) unsigned int reconfigurationTimestamp;
@property (nonatomic) BOOL hasResolution;
@property (nonatomic) int resolution;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)resolutionAsString:(int)a0;
- (int)StringAsResolution:(id)a0;

@end
