@class PBUnknownFields;

@interface GEORouteLegRange : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _endValidDistanceOffsetCm;
    unsigned int _endValidSegmentIndex;
    unsigned int _startValidDistanceOffsetCm;
    unsigned int _startValidSegmentIndex;
    struct { unsigned char has_endValidDistanceOffsetCm : 1; unsigned char has_endValidSegmentIndex : 1; unsigned char has_startValidDistanceOffsetCm : 1; unsigned char has_startValidSegmentIndex : 1; } _flags;
}

@property (nonatomic) BOOL hasStartValidSegmentIndex;
@property (nonatomic) unsigned int startValidSegmentIndex;
@property (nonatomic) BOOL hasEndValidSegmentIndex;
@property (nonatomic) unsigned int endValidSegmentIndex;
@property (nonatomic) BOOL hasStartValidDistanceOffsetCm;
@property (nonatomic) unsigned int startValidDistanceOffsetCm;
@property (nonatomic) BOOL hasEndValidDistanceOffsetCm;
@property (nonatomic) unsigned int endValidDistanceOffsetCm;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
