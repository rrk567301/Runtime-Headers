@class GEOPDViewportInfo, NSString, PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDAutocompleteParametersVenueSearch : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _buildingId;
    NSMutableArray *_categorys;
    unsigned long long _levelId;
    NSString *_query;
    unsigned long long _sectionId;
    unsigned long long _venueId;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _maxResults;
    char _highlightDiff;
    struct { unsigned char has_buildingId : 1; unsigned char has_levelId : 1; unsigned char has_sectionId : 1; unsigned char has_venueId : 1; unsigned char has_maxResults : 1; unsigned char has_highlightDiff : 1; unsigned char read_unknownFields : 1; unsigned char read_categorys : 1; unsigned char read_query : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasQuery;
@property (retain, nonatomic) NSString *query;
@property (readonly, nonatomic) char hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) char hasMaxResults;
@property (nonatomic) int maxResults;
@property (nonatomic) char hasHighlightDiff;
@property (nonatomic) char highlightDiff;
@property (nonatomic) char hasVenueId;
@property (nonatomic) unsigned long long venueId;
@property (nonatomic) char hasLevelId;
@property (nonatomic) unsigned long long levelId;
@property (nonatomic) char hasSectionId;
@property (nonatomic) unsigned long long sectionId;
@property (nonatomic) char hasBuildingId;
@property (nonatomic) unsigned long long buildingId;
@property (retain, nonatomic) NSMutableArray *categorys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)categoryType;
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
- (void)addCategory:(id)a0;
- (id)categoryAtIndex:(unsigned long long)a0;
- (unsigned long long)categorysCount;
- (void)clearCategorys;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
