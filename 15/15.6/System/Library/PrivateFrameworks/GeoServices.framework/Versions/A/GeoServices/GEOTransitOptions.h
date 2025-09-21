@class PBUnknownFields, PBDataReader, GEOFareOptions;

@interface GEOTransitOptions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _avoidedModes;
    GEOFareOptions *_fareOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _prioritization;
    int _routingBehavior;
    char _enableIncidents;
    struct { unsigned char has_prioritization : 1; unsigned char has_routingBehavior : 1; unsigned char has_enableIncidents : 1; unsigned char read_unknownFields : 1; unsigned char read_avoidedModes : 1; unsigned char read_fareOptions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long avoidedModesCount;
@property (readonly, nonatomic) int *avoidedModes;
@property (nonatomic) char hasPrioritization;
@property (nonatomic) int prioritization;
@property (readonly, nonatomic) char hasFareOptions;
@property (retain, nonatomic) GEOFareOptions *fareOptions;
@property (nonatomic) char hasRoutingBehavior;
@property (nonatomic) int routingBehavior;
@property (nonatomic) char hasEnableIncidents;
@property (nonatomic) char enableIncidents;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (void)dealloc;
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
- (int)StringAsAvoidedModes:(id)a0;
- (int)StringAsPrioritization:(id)a0;
- (int)StringAsRoutingBehavior:(id)a0;
- (void)addAvoidedMode:(int)a0;
- (int)avoidedModeAtIndex:(unsigned long long)a0;
- (id)avoidedModesAsString:(int)a0;
- (void)clearAvoidedModes;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)prioritizationAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)routingBehaviorAsString:(int)a0;
- (void)setAvoidedModes:(int *)a0 count:(unsigned long long)a1;

@end
