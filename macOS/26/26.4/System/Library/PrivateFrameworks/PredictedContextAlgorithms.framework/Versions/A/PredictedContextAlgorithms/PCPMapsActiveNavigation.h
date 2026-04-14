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
