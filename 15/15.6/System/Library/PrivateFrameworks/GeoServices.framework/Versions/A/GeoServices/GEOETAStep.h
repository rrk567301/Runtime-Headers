@class PBDataReader, GEOTimeCheckpoints, GEOEVStateInfo, GEOStopStepEVInfo, PBUnknownFields;

@interface GEOETAStep : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStopStepEVInfo *_evInfo;
    GEOEVStateInfo *_evStateInfo;
    GEOTimeCheckpoints *_timeCheckpoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _distanceCm;
    unsigned int _expectedTime;
    unsigned int _stepID;
    unsigned int _zilchPathIndex;
    int _zilchPointIndex;
    struct { unsigned char has_distanceCm : 1; unsigned char has_expectedTime : 1; unsigned char has_stepID : 1; unsigned char has_zilchPathIndex : 1; unsigned char has_zilchPointIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_evInfo : 1; unsigned char read_evStateInfo : 1; unsigned char read_timeCheckpoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) char hasExpectedTime;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic) char hasZilchPointIndex;
@property (nonatomic) int zilchPointIndex;
@property (readonly, nonatomic) char hasTimeCheckpoints;
@property (retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints;
@property (nonatomic) char hasZilchPathIndex;
@property (nonatomic) unsigned int zilchPathIndex;
@property (readonly, nonatomic) char hasEvInfo;
@property (retain, nonatomic) GEOStopStepEVInfo *evInfo;
@property (readonly, nonatomic) char hasEvStateInfo;
@property (retain, nonatomic) GEOEVStateInfo *evStateInfo;
@property (nonatomic) char hasDistanceCm;
@property (nonatomic) unsigned int distanceCm;
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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
