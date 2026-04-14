@class PCPLocation, NSData;

@interface PCPMapsActiveNavigation : PBCodable <NSCopying> {
    struct { unsigned char travelTime : 1; unsigned char usageTimeCFAbsolute : 1; } _has;
}

@property (nonatomic) BOOL hasTravelTime;
@property (nonatomic) double travelTime;
@property (readonly, nonatomic) BOOL hasOriginLocation;
@property (retain, nonatomic) PCPLocation *originLocation;
@property (readonly, nonatomic) BOOL hasDestinationLocation;
@property (retain, nonatomic) PCPLocation *destinationLocation;
@property (nonatomic) BOOL hasUsageTimeCFAbsolute;
@property (nonatomic) double usageTimeCFAbsolute;
@property (readonly, nonatomic) BOOL hasLoiIdentifier;
@property (retain, nonatomic) NSData *loiIdentifier;

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
