@class GEOPDExperimentMetadata, PBDataReader, NSMutableArray, GEOPDModelMetadata;

@interface GEOPDMIFAutocompleteResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDExperimentMetadata *_experimentMetadata;
    GEOPDModelMetadata *_modelMetadata;
    NSMutableArray *_resultSections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _mifResponseStatus;
    struct { unsigned char has_mifResponseStatus : 1; unsigned char read_experimentMetadata : 1; unsigned char read_modelMetadata : 1; unsigned char read_resultSections : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *resultSections;
@property (readonly, nonatomic) BOOL hasExperimentMetadata;
@property (retain, nonatomic) GEOPDExperimentMetadata *experimentMetadata;
@property (readonly, nonatomic) BOOL hasModelMetadata;
@property (retain, nonatomic) GEOPDModelMetadata *modelMetadata;
@property (nonatomic) BOOL hasMifResponseStatus;
@property (nonatomic) int mifResponseStatus;

+ (BOOL)isValid:(id)a0;
+ (Class)resultSectionType;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsMifResponseStatus:(id)a0;
- (void)addResultSection:(id)a0;
- (void)clearResultSections;
- (id)mifResponseStatusAsString:(int)a0;
- (id)resultSectionAtIndex:(unsigned long long)a0;
- (unsigned long long)resultSectionsCount;

@end
