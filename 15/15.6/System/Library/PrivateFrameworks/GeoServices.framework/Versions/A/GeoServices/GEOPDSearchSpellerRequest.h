@class GEOPDSearchLocationContext, NSString, GEOPDSearchKeyValuePairList, GEOPDSearchLanguageContext, PBDataReader;

@interface GEOPDSearchSpellerRequest : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDSearchKeyValuePairList *_abConfigParams;
    GEOPDSearchLanguageContext *_languageContext;
    GEOPDSearchLocationContext *_locationContext;
    NSString *_query;
    GEOPDSearchKeyValuePairList *_tokenTags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _requestFlags;
    unsigned int _maxSuggestions;
    int _queryType;
    char _performCompletion;
    char _useCache;
    struct { unsigned char has_requestFlags : 1; unsigned char has_maxSuggestions : 1; unsigned char has_queryType : 1; unsigned char has_performCompletion : 1; unsigned char has_useCache : 1; unsigned char read_abConfigParams : 1; unsigned char read_languageContext : 1; unsigned char read_locationContext : 1; unsigned char read_query : 1; unsigned char read_tokenTags : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasQuery;
@property (retain, nonatomic) NSString *query;
@property (readonly, nonatomic) char hasLocationContext;
@property (retain, nonatomic) GEOPDSearchLocationContext *locationContext;
@property (readonly, nonatomic) char hasLanguageContext;
@property (retain, nonatomic) GEOPDSearchLanguageContext *languageContext;
@property (nonatomic) char hasPerformCompletion;
@property (nonatomic) char performCompletion;
@property (nonatomic) char hasMaxSuggestions;
@property (nonatomic) unsigned int maxSuggestions;
@property (readonly, nonatomic) char hasAbConfigParams;
@property (retain, nonatomic) GEOPDSearchKeyValuePairList *abConfigParams;
@property (nonatomic) char hasQueryType;
@property (nonatomic) int queryType;
@property (nonatomic) char hasUseCache;
@property (nonatomic) char useCache;
@property (nonatomic) char hasRequestFlags;
@property (nonatomic) int requestFlags;
@property (readonly, nonatomic) char hasTokenTags;
@property (retain, nonatomic) GEOPDSearchKeyValuePairList *tokenTags;

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
- (int)StringAsQueryType:(id)a0;
- (int)StringAsRequestFlags:(id)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)queryTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)requestFlagsAsString:(int)a0;

@end
