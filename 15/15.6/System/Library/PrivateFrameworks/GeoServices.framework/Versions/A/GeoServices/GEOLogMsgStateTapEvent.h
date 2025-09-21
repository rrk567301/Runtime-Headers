@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgStateTapEvent : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_searchResults;
    int _pinType;
    struct { unsigned char has_pinType : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *searchResults;
@property (nonatomic) char hasPinType;
@property (nonatomic) int pinType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)searchResultsType;

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
- (int)StringAsPinType:(id)a0;
- (void)addSearchResults:(id)a0;
- (void)clearSearchResults;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)pinTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)searchResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)searchResultsCount;

@end
