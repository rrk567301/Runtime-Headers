@interface AWDCoreRoutineRankRoutesRequestedInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char highestRankedRouteScore : 1; unsigned char numberOfInputRoutes : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNumberOfInputRoutes;
@property (nonatomic) int numberOfInputRoutes;
@property (nonatomic) BOOL hasHighestRankedRouteScore;
@property (nonatomic) int highestRankedRouteScore;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
