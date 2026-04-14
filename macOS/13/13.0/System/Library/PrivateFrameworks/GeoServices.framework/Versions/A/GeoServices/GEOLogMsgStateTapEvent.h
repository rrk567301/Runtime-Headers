@class NSMutableArray;

@interface GEOLogMsgStateTapEvent : PBCodable <NSCopying> {
    NSMutableArray *_searchResults;
    int _pinType;
    struct { unsigned char has_pinType : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *searchResults;
@property (nonatomic) BOOL hasPinType;
@property (nonatomic) int pinType;

+ (BOOL)isValid:(id)a0;
+ (Class)searchResultsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
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
- (id)pinTypeAsString:(int)a0;
- (int)StringAsPinType:(id)a0;
- (void)clearSearchResults;
- (void)addSearchResults:(id)a0;
- (unsigned long long)searchResultsCount;
- (id)searchResultsAtIndex:(unsigned long long)a0;

@end
