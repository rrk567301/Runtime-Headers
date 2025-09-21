@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventClientACSuggestions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_entries;
    long long _overallLatencyInMs;
    NSMutableArray *_queryTokens;
    NSString *_query;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _autocompleteSequenceNumber;
    int _keypressStatus;
    int _selectedIndex;
    int _selectedSectionIndex;
    int _trigger;
    int _withinSectionSelectedIndex;
    char _isRerankerTriggered;
    char _isRetainedQuery;
    char _shouldDifferentiateClientAndServerResults;
    struct { unsigned char has_overallLatencyInMs : 1; unsigned char has_autocompleteSequenceNumber : 1; unsigned char has_keypressStatus : 1; unsigned char has_selectedIndex : 1; unsigned char has_selectedSectionIndex : 1; unsigned char has_trigger : 1; unsigned char has_withinSectionSelectedIndex : 1; unsigned char has_isRerankerTriggered : 1; unsigned char has_isRetainedQuery : 1; unsigned char has_shouldDifferentiateClientAndServerResults : 1; unsigned char read_entries : 1; unsigned char read_queryTokens : 1; unsigned char read_query : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasQuery;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSMutableArray *queryTokens;
@property (retain, nonatomic) NSMutableArray *entries;
@property (nonatomic) char hasSelectedIndex;
@property (nonatomic) int selectedIndex;
@property (nonatomic) char hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) char hasKeypressStatus;
@property (nonatomic) int keypressStatus;
@property (nonatomic) char hasWithinSectionSelectedIndex;
@property (nonatomic) int withinSectionSelectedIndex;
@property (nonatomic) char hasSelectedSectionIndex;
@property (nonatomic) int selectedSectionIndex;
@property (nonatomic) char hasIsRetainedQuery;
@property (nonatomic) char isRetainedQuery;
@property (nonatomic) char hasIsRerankerTriggered;
@property (nonatomic) char isRerankerTriggered;
@property (nonatomic) char hasOverallLatencyInMs;
@property (nonatomic) long long overallLatencyInMs;
@property (nonatomic) char hasShouldDifferentiateClientAndServerResults;
@property (nonatomic) char shouldDifferentiateClientAndServerResults;
@property (nonatomic) char hasAutocompleteSequenceNumber;
@property (nonatomic) unsigned int autocompleteSequenceNumber;

+ (Class)queryTokensType;
+ (Class)entriesType;
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
- (int)StringAsTrigger:(id)a0;
- (id)entriesAtIndex:(unsigned long long)a0;
- (int)StringAsKeypressStatus:(id)a0;
- (void)addQueryTokens:(id)a0;
- (void)addEntries:(id)a0;
- (void)clearEntries;
- (void)clearQueryTokens;
- (unsigned long long)entriesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)keypressStatusAsString:(int)a0;
- (id)queryTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)queryTokensCount;
- (void)readAll:(char)a0;
- (id)triggerAsString:(int)a0;

@end
