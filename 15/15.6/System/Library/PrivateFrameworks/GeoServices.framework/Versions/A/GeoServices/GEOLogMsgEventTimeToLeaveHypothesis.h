@class PBUnknownFields;

@interface GEOLogMsgEventTimeToLeaveHypothesis : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _earliestArrivalOffset;
    double _earliestDepartureOffset;
    double _latestArrivalOffset;
    double _latestDepartureOffset;
    int _arrival;
    int _departure;
    unsigned int _numberOfReroutes;
    int _ttlUiNotificationShown;
    struct { unsigned char has_earliestArrivalOffset : 1; unsigned char has_earliestDepartureOffset : 1; unsigned char has_latestArrivalOffset : 1; unsigned char has_latestDepartureOffset : 1; unsigned char has_arrival : 1; unsigned char has_departure : 1; unsigned char has_numberOfReroutes : 1; unsigned char has_ttlUiNotificationShown : 1; } _flags;
}

@property (nonatomic) char hasDeparture;
@property (nonatomic) int departure;
@property (nonatomic) char hasArrival;
@property (nonatomic) int arrival;
@property (nonatomic) char hasNumberOfReroutes;
@property (nonatomic) unsigned int numberOfReroutes;
@property (nonatomic) char hasTtlUiNotificationShown;
@property (nonatomic) int ttlUiNotificationShown;
@property (nonatomic) char hasEarliestDepartureOffset;
@property (nonatomic) double earliestDepartureOffset;
@property (nonatomic) char hasLatestDepartureOffset;
@property (nonatomic) double latestDepartureOffset;
@property (nonatomic) char hasEarliestArrivalOffset;
@property (nonatomic) double earliestArrivalOffset;
@property (nonatomic) char hasLatestArrivalOffset;
@property (nonatomic) double latestArrivalOffset;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDeparture:(id)a0;
- (id)ttlUiNotificationShownAsString:(int)a0;
- (int)StringAsTtlUiNotificationShown:(id)a0;
- (int)StringAsArrival:(id)a0;
- (id)arrivalAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)departureAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
