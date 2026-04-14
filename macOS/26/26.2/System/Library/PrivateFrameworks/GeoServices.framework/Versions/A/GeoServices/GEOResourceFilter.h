@class PBDataReader, PBUnknownFields;

@interface GEOResourceFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _scales;
    struct { int *list; unsigned long long count; unsigned long long size; } _scenarios;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_scales : 1; unsigned char read_scenarios : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long scalesCount;
@property (readonly, nonatomic) int *scales;
@property (readonly, nonatomic) unsigned long long scenariosCount;
@property (readonly, nonatomic) int *scenarios;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearScales;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)scenariosAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearScenarios;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (void)addScale:(int)a0;
- (id)scalesAsString:(int)a0;
- (void)setScenarios:(int *)a0 count:(unsigned long long)a1;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addScenario:(int)a0;
- (int)scaleAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (int)StringAsScales:(id)a0;
- (id)jsonRepresentation;
- (id)init;
- (int)StringAsScenarios:(id)a0;
- (int)scenarioAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (void)dealloc;
- (void)setScales:(int *)a0 count:(unsigned long long)a1;

@end
