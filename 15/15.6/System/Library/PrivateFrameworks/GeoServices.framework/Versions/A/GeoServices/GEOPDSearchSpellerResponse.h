@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchSpellerResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_debugResponse;
    unsigned long long _decileId;
    double _latencyMs;
    double _misspellScore;
    NSMutableArray *_spellSuggestions;
    NSMutableArray *_tokenCandidates;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _modelNumberMajor;
    unsigned int _modelNumberMinor;
    int _rankerModelType;
    int _resultStatus;
    char _isFromDLCacheModel;
    char _isFromDLRuntimeModel;
    struct { unsigned char has_decileId : 1; unsigned char has_latencyMs : 1; unsigned char has_misspellScore : 1; unsigned char has_modelNumberMajor : 1; unsigned char has_modelNumberMinor : 1; unsigned char has_rankerModelType : 1; unsigned char has_resultStatus : 1; unsigned char has_isFromDLCacheModel : 1; unsigned char has_isFromDLRuntimeModel : 1; unsigned char read_debugResponse : 1; unsigned char read_spellSuggestions : 1; unsigned char read_tokenCandidates : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *spellSuggestions;
@property (nonatomic) char hasResultStatus;
@property (nonatomic) int resultStatus;
@property (nonatomic) char hasDecileId;
@property (nonatomic) unsigned long long decileId;
@property (nonatomic) char hasLatencyMs;
@property (nonatomic) double latencyMs;
@property (retain, nonatomic) NSMutableArray *tokenCandidates;
@property (nonatomic) char hasMisspellScore;
@property (nonatomic) double misspellScore;
@property (readonly, nonatomic) char hasDebugResponse;
@property (retain, nonatomic) NSString *debugResponse;
@property (nonatomic) char hasRankerModelType;
@property (nonatomic) int rankerModelType;
@property (nonatomic) char hasIsFromDLCacheModel;
@property (nonatomic) char isFromDLCacheModel;
@property (nonatomic) char hasIsFromDLRuntimeModel;
@property (nonatomic) char isFromDLRuntimeModel;
@property (nonatomic) char hasModelNumberMajor;
@property (nonatomic) unsigned int modelNumberMajor;
@property (nonatomic) char hasModelNumberMinor;
@property (nonatomic) unsigned int modelNumberMinor;

+ (char)isValid:(id)a0;
+ (Class)spellSuggestionType;
+ (Class)tokenCandidatesType;

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
- (int)StringAsRankerModelType:(id)a0;
- (int)StringAsResultStatus:(id)a0;
- (void)addSpellSuggestion:(id)a0;
- (void)addTokenCandidates:(id)a0;
- (void)clearSpellSuggestions;
- (void)clearTokenCandidates;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)rankerModelTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)resultStatusAsString:(int)a0;
- (id)spellSuggestionAtIndex:(unsigned long long)a0;
- (unsigned long long)spellSuggestionsCount;
- (id)tokenCandidatesAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenCandidatesCount;

@end
