@class PBDataReader, GEOVLFCorrection, NSMutableArray, PBUnknownFields;

@interface GEOVLFLocalizationResults : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOVLFPositionContextClassification { double _indoorProbability; double _outdoorProbability; int _type; struct { unsigned char indoorProbability : 1; unsigned char outdoorProbability : 1; unsigned char type : 1; } _has; } _positionContextClassification;
    NSMutableArray *_localizationDetails;
    GEOVLFCorrection *_vlfCorrection;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _vlfFinalState;
    struct { unsigned char has_positionContextClassification : 1; unsigned char has_vlfFinalState : 1; unsigned char read_unknownFields : 1; unsigned char read_localizationDetails : 1; unsigned char read_vlfCorrection : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasVlfCorrection;
@property (retain, nonatomic) GEOVLFCorrection *vlfCorrection;
@property (nonatomic) char hasVlfFinalState;
@property (nonatomic) int vlfFinalState;
@property (retain, nonatomic) NSMutableArray *localizationDetails;
@property (nonatomic) char hasPositionContextClassification;
@property (nonatomic) struct GEOVLFPositionContextClassification { double x0; double x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } positionContextClassification;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (int)StringAsVlfFinalState:(id)a0;
- (void)addLocalizationDetails:(id)a0;
- (void)clearLocalizationDetails;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)localizationDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)localizationDetailsCount;
- (void)readAll:(char)a0;
- (id)vlfFinalStateAsString:(int)a0;

@end
