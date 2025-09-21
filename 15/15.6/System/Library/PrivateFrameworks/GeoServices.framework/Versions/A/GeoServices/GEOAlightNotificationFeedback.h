@interface GEOAlightNotificationFeedback : PBCodable <NSCopying> {
    unsigned long long _alightStopMuid;
    double _arrivedAtTimestamp;
    double _lastDetectedLocationHorizontalAccuracy;
    double _lastDetectedLocationTimestamp;
    unsigned long long _lineMuid;
    unsigned long long _previousStopMuid;
    double _triggeredTimestamp;
    int _lastDetectedLocationTraversalPercent;
    unsigned int _stepID;
    int _triggeredLocationTraversalPercent;
    int _trigger;
    char _arrivalDetected;
    char _displayed;
    char _triggered;
    struct { unsigned char has_alightStopMuid : 1; unsigned char has_arrivedAtTimestamp : 1; unsigned char has_lastDetectedLocationHorizontalAccuracy : 1; unsigned char has_lastDetectedLocationTimestamp : 1; unsigned char has_lineMuid : 1; unsigned char has_previousStopMuid : 1; unsigned char has_triggeredTimestamp : 1; unsigned char has_lastDetectedLocationTraversalPercent : 1; unsigned char has_stepID : 1; unsigned char has_triggeredLocationTraversalPercent : 1; unsigned char has_trigger : 1; unsigned char has_arrivalDetected : 1; unsigned char has_displayed : 1; unsigned char has_triggered : 1; } _flags;
}

@property (nonatomic) char hasDisplayed;
@property (nonatomic) char displayed;
@property (nonatomic) char hasTriggered;
@property (nonatomic) char triggered;
@property (nonatomic) char hasLineMuid;
@property (nonatomic) unsigned long long lineMuid;
@property (nonatomic) char hasPreviousStopMuid;
@property (nonatomic) unsigned long long previousStopMuid;
@property (nonatomic) char hasAlightStopMuid;
@property (nonatomic) unsigned long long alightStopMuid;
@property (nonatomic) char hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) char hasTriggeredTimestamp;
@property (nonatomic) double triggeredTimestamp;
@property (nonatomic) char hasTriggeredLocationTraversalPercent;
@property (nonatomic) int triggeredLocationTraversalPercent;
@property (nonatomic) char hasLastDetectedLocationTimestamp;
@property (nonatomic) double lastDetectedLocationTimestamp;
@property (nonatomic) char hasLastDetectedLocationTraversalPercent;
@property (nonatomic) int lastDetectedLocationTraversalPercent;
@property (nonatomic) char hasLastDetectedLocationHorizontalAccuracy;
@property (nonatomic) double lastDetectedLocationHorizontalAccuracy;
@property (nonatomic) char hasArrivalDetected;
@property (nonatomic) char arrivalDetected;
@property (nonatomic) char hasArrivedAtTimestamp;
@property (nonatomic) double arrivedAtTimestamp;
@property (nonatomic) char hasStepID;
@property (nonatomic) unsigned int stepID;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTrigger:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)triggerAsString:(int)a0;

@end
