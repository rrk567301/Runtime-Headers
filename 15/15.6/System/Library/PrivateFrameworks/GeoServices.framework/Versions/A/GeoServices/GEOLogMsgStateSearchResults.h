@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOLogMsgStateSearchResults : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_searchQuery;
    NSMutableArray *_searchResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _includesEnrichedResult;
    struct { unsigned char has_includesEnrichedResult : 1; unsigned char read_unknownFields : 1; unsigned char read_searchQuery : 1; unsigned char read_searchResults : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *searchResults;
@property (nonatomic) char hasIncludesEnrichedResult;
@property (nonatomic) char includesEnrichedResult;
@property (readonly, nonatomic) char hasSearchQuery;
@property (retain, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)searchResultsType;

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
- (void)addSearchResults:(id)a0;
- (void)clearSearchResults;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)searchResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)searchResultsCount;

@end
