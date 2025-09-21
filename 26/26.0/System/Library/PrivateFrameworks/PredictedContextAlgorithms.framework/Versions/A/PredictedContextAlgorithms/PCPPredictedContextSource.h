@class PCPLocationWithTimestamp, PCPMapsViewedPlace, PCPMapsActiveNavigation, PCPCalendarEvent, PCPHomeKitHome, PCPParkedCar, PCPHealthKitWorkout;

@interface PCPPredictedContextSource : PBCodable <NSCopying> {
    struct { unsigned char predictedContextSource : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMapsViewedPlace;
@property (retain, nonatomic) PCPMapsViewedPlace *mapsViewedPlace;
@property (readonly, nonatomic) BOOL hasMapsActiveNavigation;
@property (retain, nonatomic) PCPMapsActiveNavigation *mapsActiveNavigation;
@property (readonly, nonatomic) BOOL hasCalendarEvent;
@property (retain, nonatomic) PCPCalendarEvent *calendarEvent;
@property (readonly, nonatomic) BOOL hasHomekitHome;
@property (retain, nonatomic) PCPHomeKitHome *homekitHome;
@property (readonly, nonatomic) BOOL hasHealthKitWorkout;
@property (retain, nonatomic) PCPHealthKitWorkout *healthKitWorkout;
@property (readonly, nonatomic) BOOL hasParkedCar;
@property (retain, nonatomic) PCPParkedCar *parkedCar;
@property (readonly, nonatomic) BOOL hasPropagatedLocation;
@property (retain, nonatomic) PCPLocationWithTimestamp *propagatedLocation;
@property (nonatomic) BOOL hasPredictedContextSource;
@property (nonatomic) int predictedContextSource;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsPredictedContextSource:(id)a0;
- (id)predictedContextSourceAsString:(int)a0;
- (void)clearOneofValuesForPredictedContextSource;

@end
