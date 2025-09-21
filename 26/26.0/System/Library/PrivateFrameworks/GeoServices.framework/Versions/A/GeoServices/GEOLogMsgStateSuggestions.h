@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOLogMsgStateSuggestions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_displayedResults;
    NSString *_searchString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _acSequenceNumber;
    int _searchFieldType;
    int _selectedIndex;
    struct { unsigned char has_acSequenceNumber : 1; unsigned char has_searchFieldType : 1; unsigned char has_selectedIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_displayedResults : 1; unsigned char read_searchString : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSMutableArray *displayedResults;
@property (nonatomic) BOOL hasSelectedIndex;
@property (nonatomic) int selectedIndex;
@property (nonatomic) BOOL hasSearchFieldType;
@property (nonatomic) int searchFieldType;
@property (nonatomic) BOOL hasAcSequenceNumber;
@property (nonatomic) int acSequenceNumber;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)displayedResultType;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
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
- (int)StringAsSearchFieldType:(id)a0;
- (void)addDisplayedResult:(id)a0;
- (void)clearDisplayedResults;
- (id)displayedResultAtIndex:(unsigned long long)a0;
- (unsigned long long)displayedResultsCount;
- (id)searchFieldTypeAsString:(int)a0;

@end
