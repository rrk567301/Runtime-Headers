@interface HMSoftwareUpdateEventProtoSoftwareUpdateProgress : PBCodable <NSCopying> {
    struct { unsigned char estimatedTimeRemaining : 1; unsigned char percentageComplete : 1; } _has;
}

@property (nonatomic) BOOL hasPercentageComplete;
@property (nonatomic) float percentageComplete;
@property (nonatomic) BOOL hasEstimatedTimeRemaining;
@property (nonatomic) double estimatedTimeRemaining;

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
