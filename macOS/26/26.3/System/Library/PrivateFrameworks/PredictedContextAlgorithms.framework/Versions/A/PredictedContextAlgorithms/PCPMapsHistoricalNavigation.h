@class PCPLocation;

@interface PCPMapsHistoricalNavigation : PBCodable <NSCopying> {
    struct { unsigned char usageTimeCFAbsolute : 1; } _has;
}

@property (nonatomic) BOOL hasUsageTimeCFAbsolute;
@property (nonatomic) double usageTimeCFAbsolute;
@property (readonly, nonatomic) BOOL hasOriginLocation;
@property (retain, nonatomic) PCPLocation *originLocation;
@property (readonly, nonatomic) BOOL hasDestinationLocation;
@property (retain, nonatomic) PCPLocation *destinationLocation;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
