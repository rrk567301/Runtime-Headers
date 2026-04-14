@class NSData, PCPLocation, PCPMapItem;

@interface PCPLocationOfInterest : PBCodable <NSCopying> {
    struct { unsigned char lastVisitTimeCFAbsolute : 1; unsigned char visitFrequency : 1; unsigned char placeType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLoiIdentifier;
@property (retain, nonatomic) NSData *loiIdentifier;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) PCPLocation *location;
@property (nonatomic) BOOL hasPlaceType;
@property (nonatomic) int placeType;
@property (nonatomic) BOOL hasLastVisitTimeCFAbsolute;
@property (nonatomic) double lastVisitTimeCFAbsolute;
@property (nonatomic) BOOL hasVisitFrequency;
@property (nonatomic) double visitFrequency;
@property (readonly, nonatomic) BOOL hasPlaceMapItem;
@property (retain, nonatomic) PCPMapItem *placeMapItem;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)StringAsPlaceType:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)placeTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
