@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgStateSearchResults : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_searchQuery;
    NSMutableArray *_searchResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _includesEnrichedResult;
    struct { unsigned char has_includesEnrichedResult : 1; unsigned char read_searchQuery : 1; unsigned char read_searchResults : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *searchResults;
@property (nonatomic) BOOL hasIncludesEnrichedResult;
@property (nonatomic) BOOL includesEnrichedResult;
@property (readonly, nonatomic) BOOL hasSearchQuery;
@property (retain, nonatomic) NSString *searchQuery;

+ (BOOL)isValid:(id)a0;
+ (Class)searchResultsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearSearchResults;
- (void)addSearchResults:(id)a0;
- (unsigned long long)searchResultsCount;
- (id)searchResultsAtIndex:(unsigned long long)a0;

@end
