@class GEOVLFTileDetails, GEOVLFFailureDetails, GEOVLFGravityVector, PBDataReader, PBUnknownFields, GEOVLFSuccessDetails, GEOVLFLocation, GEOVLFLocalizationAlgorithmDetails;

@interface GEOVLFLocalizationDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOVLFPositionContextClassification { double _indoorProbability; double _outdoorProbability; int _type; struct { unsigned char indoorProbability : 1; unsigned char outdoorProbability : 1; unsigned char type : 1; } _has; } _positionContextClassification;
    GEOVLFLocalizationAlgorithmDetails *_algorithmDetails;
    double _exposureTargetOffset;
    GEOVLFFailureDetails *_failureDetails;
    GEOVLFGravityVector *_gravityVector;
    GEOVLFLocation *_location;
    GEOVLFSuccessDetails *_successDetails;
    GEOVLFTileDetails *_tileDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _relativeTimestampMs;
    unsigned int _runTimeMs;
    struct { unsigned char has_positionContextClassification : 1; unsigned char has_exposureTargetOffset : 1; unsigned char has_relativeTimestampMs : 1; unsigned char has_runTimeMs : 1; unsigned char read_unknownFields : 1; unsigned char read_algorithmDetails : 1; unsigned char read_failureDetails : 1; unsigned char read_gravityVector : 1; unsigned char read_location : 1; unsigned char read_successDetails : 1; unsigned char read_tileDetails : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasTileDetails;
@property (retain, nonatomic) GEOVLFTileDetails *tileDetails;
@property (nonatomic) char hasRelativeTimestampMs;
@property (nonatomic) unsigned int relativeTimestampMs;
@property (nonatomic) char hasRunTimeMs;
@property (nonatomic) unsigned int runTimeMs;
@property (readonly, nonatomic) char hasAlgorithmDetails;
@property (retain, nonatomic) GEOVLFLocalizationAlgorithmDetails *algorithmDetails;
@property (readonly, nonatomic) char hasSuccessDetails;
@property (retain, nonatomic) GEOVLFSuccessDetails *successDetails;
@property (readonly, nonatomic) char hasFailureDetails;
@property (retain, nonatomic) GEOVLFFailureDetails *failureDetails;
@property (readonly, nonatomic) char hasGravityVector;
@property (retain, nonatomic) GEOVLFGravityVector *gravityVector;
@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) GEOVLFLocation *location;
@property (nonatomic) char hasExposureTargetOffset;
@property (nonatomic) double exposureTargetOffset;
@property (nonatomic) char hasPositionContextClassification;
@property (nonatomic) struct GEOVLFPositionContextClassification { double x0; double x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } positionContextClassification;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
