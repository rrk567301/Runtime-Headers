@class NSMutableArray;

@interface AWDCoreRoutineLearnedLocationTrainingMetrics : PBCodable <NSCopying> {
    struct { unsigned char intervalSinceLastAttempt : 1; unsigned char latency : 1; unsigned char maxIntervalBetweenLocations : 1; unsigned char timestamp : 1; unsigned char locationsProcessed : 1; unsigned char placeCountDevice : 1; unsigned char placeCountTotal : 1; unsigned char visitCountDevice : 1; unsigned char visitCountTotal : 1; unsigned char trainedVisits : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasTrainedVisits;
@property (nonatomic) char trainedVisits;
@property (nonatomic) char hasIntervalSinceLastAttempt;
@property (nonatomic) unsigned long long intervalSinceLastAttempt;
@property (nonatomic) char hasLatency;
@property (nonatomic) unsigned long long latency;
@property (nonatomic) char hasLocationsProcessed;
@property (nonatomic) unsigned int locationsProcessed;
@property (nonatomic) char hasMaxIntervalBetweenLocations;
@property (nonatomic) unsigned long long maxIntervalBetweenLocations;
@property (retain, nonatomic) NSMutableArray *visits;
@property (retain, nonatomic) NSMutableArray *places;
@property (nonatomic) char hasVisitCountDevice;
@property (nonatomic) unsigned int visitCountDevice;
@property (nonatomic) char hasVisitCountTotal;
@property (nonatomic) unsigned int visitCountTotal;
@property (nonatomic) char hasPlaceCountDevice;
@property (nonatomic) unsigned int placeCountDevice;
@property (nonatomic) char hasPlaceCountTotal;
@property (nonatomic) unsigned int placeCountTotal;

+ (Class)placesType;
+ (Class)visitsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addVisits:(id)a0;
- (unsigned long long)visitsCount;
- (void)clearPlaces;
- (unsigned long long)placesCount;
- (void)addPlaces:(id)a0;
- (void)clearVisits;
- (id)placesAtIndex:(unsigned long long)a0;
- (id)visitsAtIndex:(unsigned long long)a0;

@end
