@class NSMutableArray, PBUnknownFields;

@interface GEOOriginalWaypointRoute : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_routeLegs;
    int _creationMethod;
    unsigned int _identifier;
    unsigned int _lastValidUserOffsetCm;
    int _purpose;
    int _source;
    struct { unsigned char has_creationMethod : 1; unsigned char has_identifier : 1; unsigned char has_lastValidUserOffsetCm : 1; unsigned char has_purpose : 1; unsigned char has_source : 1; } _flags;
}

@property (nonatomic) char hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *routeLegs;
@property (nonatomic) char hasPurpose;
@property (nonatomic) int purpose;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (nonatomic) char hasLastValidUserOffsetCm;
@property (nonatomic) unsigned int lastValidUserOffsetCm;
@property (nonatomic) char hasCreationMethod;
@property (nonatomic) int creationMethod;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)routeLegType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (int)StringAsCreationMethod:(id)a0;
- (int)StringAsPurpose:(id)a0;
- (void)addRouteLeg:(id)a0;
- (void)clearRouteLegs;
- (void)clearUnknownFields:(char)a0;
- (id)creationMethodAsString:(int)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)purposeAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)routeLegAtIndex:(unsigned long long)a0;
- (unsigned long long)routeLegsCount;

@end
