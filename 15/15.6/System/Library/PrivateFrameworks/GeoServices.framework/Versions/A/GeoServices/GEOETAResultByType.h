@class GEOShortTrafficSummary, PBDataReader, GEORouteTrafficDetail, NSMutableArray, PBUnknownFields;

@interface GEOETAResultByType : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _expectedTimeOfDeparture;
    GEORouteTrafficDetail *_routeTrafficDetail;
    GEOShortTrafficSummary *_shortTrafficSummary;
    NSMutableArray *_summaryForPredictedDestinations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    int _licensePlateRestrictionImpact;
    unsigned int _staticTravelTime;
    int _status;
    int _transportType;
    unsigned int _travelTimeBestEstimate;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    struct { unsigned char has_expectedTimeOfDeparture : 1; unsigned char has_distance : 1; unsigned char has_historicTravelTime : 1; unsigned char has_licensePlateRestrictionImpact : 1; unsigned char has_staticTravelTime : 1; unsigned char has_status : 1; unsigned char has_transportType : 1; unsigned char has_travelTimeBestEstimate : 1; unsigned char has_travelTimeAggressiveEstimate : 1; unsigned char has_travelTimeConservativeEstimate : 1; unsigned char read_unknownFields : 1; unsigned char read_routeTrafficDetail : 1; unsigned char read_shortTrafficSummary : 1; unsigned char read_summaryForPredictedDestinations : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasTravelTimeBestEstimate;
@property (nonatomic) unsigned int travelTimeBestEstimate;
@property (nonatomic) char hasHistoricTravelTime;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic) char hasDistance;
@property (nonatomic) unsigned int distance;
@property (nonatomic) char hasExpectedTimeOfDeparture;
@property (nonatomic) double expectedTimeOfDeparture;
@property (nonatomic) char hasTravelTimeConservativeEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (nonatomic) char hasTravelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) char hasStaticTravelTime;
@property (nonatomic) unsigned int staticTravelTime;
@property (retain, nonatomic) NSMutableArray *summaryForPredictedDestinations;
@property (readonly, nonatomic) char hasRouteTrafficDetail;
@property (retain, nonatomic) GEORouteTrafficDetail *routeTrafficDetail;
@property (readonly, nonatomic) char hasShortTrafficSummary;
@property (retain, nonatomic) GEOShortTrafficSummary *shortTrafficSummary;
@property (nonatomic) char hasLicensePlateRestrictionImpact;
@property (nonatomic) int licensePlateRestrictionImpact;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)summaryForPredictedDestinationType;

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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (int)StringAsTransportType:(id)a0;
- (int)StringAsLicensePlateRestrictionImpact:(id)a0;
- (void)addSummaryForPredictedDestination:(id)a0;
- (void)clearSummaryForPredictedDestinations;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)licensePlateRestrictionImpactAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)summaryForPredictedDestinationAtIndex:(unsigned long long)a0;
- (unsigned long long)summaryForPredictedDestinationsCount;
- (id)transportTypeAsString:(int)a0;

@end
