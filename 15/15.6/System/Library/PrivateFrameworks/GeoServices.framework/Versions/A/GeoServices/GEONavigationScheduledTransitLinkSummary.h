@class GEONavigationTransitStopSummary, PBDataReader;

@interface GEONavigationScheduledTransitLinkSummary : PBCodable <NSCopying> {
    PBDataReader *_reader;
    unsigned long long _lineID;
    double _scheduledArrival;
    double _scheduledDeparture;
    GEONavigationTransitStopSummary *_stopFrom;
    GEONavigationTransitStopSummary *_stopTo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_lineID : 1; unsigned char has_scheduledArrival : 1; unsigned char has_scheduledDeparture : 1; unsigned char read_stopFrom : 1; unsigned char read_stopTo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasLineID;
@property (nonatomic) unsigned long long lineID;
@property (nonatomic) char hasScheduledDeparture;
@property (nonatomic) double scheduledDeparture;
@property (nonatomic) char hasScheduledArrival;
@property (nonatomic) double scheduledArrival;
@property (readonly, nonatomic) char hasStopFrom;
@property (retain, nonatomic) GEONavigationTransitStopSummary *stopFrom;
@property (readonly, nonatomic) char hasStopTo;
@property (retain, nonatomic) GEONavigationTransitStopSummary *stopTo;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithTransitTripRouteStep:(id)a0 originSummary:(id)a1 destinationSummary:(id)a2;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
