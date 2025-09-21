@class GEOVLFARFailureTypes, GEOVLFEntryPoint, GEOVLFCorrection, PBDataReader, PBUnknownFields, GEOVLFLocation, NSMutableArray, GEOVLFInitializationFailureDetails;

@interface GEOLogMsgEventVLFUsage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOVLFPositionContextClassification { double _indoorProbability; double _outdoorProbability; int _type; struct { unsigned char indoorProbability : 1; unsigned char outdoorProbability : 1; unsigned char type : 1; } _has; } _initialPositionContextClassification;
    GEOVLFARFailureTypes *_arFailureTypes;
    NSMutableArray *_arStates;
    NSMutableArray *_deviceOrientations;
    GEOVLFEntryPoint *_entryPoint;
    GEOVLFLocation *_initialLocation;
    GEOVLFInitializationFailureDetails *_initializationFailureDetails;
    NSMutableArray *_localizationDetails;
    GEOVLFCorrection *_postFusionCorrection;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _finalState;
    unsigned int _sessionTimeMs;
    unsigned int _timeRoundedToHour;
    struct { unsigned char has_initialPositionContextClassification : 1; unsigned char has_finalState : 1; unsigned char has_sessionTimeMs : 1; unsigned char has_timeRoundedToHour : 1; unsigned char read_unknownFields : 1; unsigned char read_arFailureTypes : 1; unsigned char read_arStates : 1; unsigned char read_deviceOrientations : 1; unsigned char read_entryPoint : 1; unsigned char read_initialLocation : 1; unsigned char read_initializationFailureDetails : 1; unsigned char read_localizationDetails : 1; unsigned char read_postFusionCorrection : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasEntryPoint;
@property (retain, nonatomic) GEOVLFEntryPoint *entryPoint;
@property (nonatomic) char hasSessionTimeMs;
@property (nonatomic) unsigned int sessionTimeMs;
@property (retain, nonatomic) NSMutableArray *localizationDetails;
@property (nonatomic) char hasFinalState;
@property (nonatomic) int finalState;
@property (readonly, nonatomic) char hasPostFusionCorrection;
@property (retain, nonatomic) GEOVLFCorrection *postFusionCorrection;
@property (nonatomic) char hasTimeRoundedToHour;
@property (nonatomic) unsigned int timeRoundedToHour;
@property (nonatomic) char hasInitialPositionContextClassification;
@property (nonatomic) struct GEOVLFPositionContextClassification { double x0; double x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } initialPositionContextClassification;
@property (readonly, nonatomic) char hasInitializationFailureDetails;
@property (retain, nonatomic) GEOVLFInitializationFailureDetails *initializationFailureDetails;
@property (retain, nonatomic) NSMutableArray *arStates;
@property (retain, nonatomic) NSMutableArray *deviceOrientations;
@property (readonly, nonatomic) char hasInitialLocation;
@property (retain, nonatomic) GEOVLFLocation *initialLocation;
@property (readonly, nonatomic) char hasArFailureTypes;
@property (retain, nonatomic) GEOVLFARFailureTypes *arFailureTypes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)arStateType;
+ (Class)deviceOrientationType;
+ (char)isValid:(id)a0;
+ (Class)localizationDetailsType;

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
- (int)StringAsFinalState:(id)a0;
- (id)arStateAtIndex:(unsigned long long)a0;
- (void)addArState:(id)a0;
- (void)addDeviceOrientation:(id)a0;
- (void)addLocalizationDetails:(id)a0;
- (unsigned long long)arStatesCount;
- (void)clearArStates;
- (void)clearDeviceOrientations;
- (void)clearLocalizationDetails;
- (void)clearUnknownFields:(char)a0;
- (id)deviceOrientationAtIndex:(unsigned long long)a0;
- (unsigned long long)deviceOrientationsCount;
- (id)finalStateAsString:(int)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)localizationDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)localizationDetailsCount;
- (void)readAll:(char)a0;

@end
