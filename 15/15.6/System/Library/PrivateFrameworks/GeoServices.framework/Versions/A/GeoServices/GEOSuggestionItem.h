@class NSString;

@interface GEOSuggestionItem : PBCodable <NSCopying> {
    NSString *_suggestionString;
    int _tappingCount;
    char _eventuallyVisible;
    char _initiallyVisible;
    struct { unsigned char has_tappingCount : 1; unsigned char has_eventuallyVisible : 1; unsigned char has_initiallyVisible : 1; } _flags;
}

@property (readonly, nonatomic) char hasSuggestionString;
@property (retain, nonatomic) NSString *suggestionString;
@property (nonatomic) char hasInitiallyVisible;
@property (nonatomic) char initiallyVisible;
@property (nonatomic) char hasEventuallyVisible;
@property (nonatomic) char eventuallyVisible;
@property (nonatomic) char hasTappingCount;
@property (nonatomic) int tappingCount;

+ (char)isValid:(id)a0;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
