@class GEOPDResultRefinementToggle, GEOPDResultRefinementRange, PBDataReader, GEOPDResultRefinementGuidesHome, PBUnknownFields, GEOPDResultRefinementSort, GEOPDResultRefinementMultiSelect, GEOPDResultRefinementOpenOptions;

@interface GEOPDResultRefinement : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDResultRefinementGuidesHome *_guidesHome;
    GEOPDResultRefinementMultiSelect *_multiSelect;
    GEOPDResultRefinementOpenOptions *_openOptions;
    GEOPDResultRefinementRange *_range;
    GEOPDResultRefinementSort *_sort;
    GEOPDResultRefinementToggle *_toggle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _resultRefinementType;
    struct { unsigned char has_resultRefinementType : 1; unsigned char read_unknownFields : 1; unsigned char read_guidesHome : 1; unsigned char read_multiSelect : 1; unsigned char read_openOptions : 1; unsigned char read_range : 1; unsigned char read_sort : 1; unsigned char read_toggle : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasResultRefinementType;
@property (nonatomic) int resultRefinementType;
@property (readonly, nonatomic) BOOL hasToggle;
@property (retain, nonatomic) GEOPDResultRefinementToggle *toggle;
@property (readonly, nonatomic) BOOL hasRange;
@property (retain, nonatomic) GEOPDResultRefinementRange *range;
@property (readonly, nonatomic) BOOL hasMultiSelect;
@property (retain, nonatomic) GEOPDResultRefinementMultiSelect *multiSelect;
@property (readonly, nonatomic) BOOL hasSort;
@property (retain, nonatomic) GEOPDResultRefinementSort *sort;
@property (readonly, nonatomic) BOOL hasGuidesHome;
@property (retain, nonatomic) GEOPDResultRefinementGuidesHome *guidesHome;
@property (readonly, nonatomic) BOOL hasOpenOptions;
@property (retain, nonatomic) GEOPDResultRefinementOpenOptions *openOptions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsResultRefinementType:(id)a0;
- (id)resultRefinementTypeAsString:(int)a0;

@end
