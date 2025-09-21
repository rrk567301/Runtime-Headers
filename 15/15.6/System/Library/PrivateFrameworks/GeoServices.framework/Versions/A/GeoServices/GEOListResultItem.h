@interface GEOListResultItem : PBCodable <NSCopying> {
    unsigned long long _businessId;
    long long _latency;
    int _resultType;
    int _tappedCount;
    char _eventuallyVisible;
    char _initiallyVisible;
    struct { unsigned char has_businessId : 1; unsigned char has_latency : 1; unsigned char has_resultType : 1; unsigned char has_tappedCount : 1; unsigned char has_eventuallyVisible : 1; unsigned char has_initiallyVisible : 1; } _flags;
}

@property (nonatomic) char hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) char hasInitiallyVisible;
@property (nonatomic) char initiallyVisible;
@property (nonatomic) char hasEventuallyVisible;
@property (nonatomic) char eventuallyVisible;
@property (nonatomic) char hasLatency;
@property (nonatomic) long long latency;
@property (nonatomic) char hasTappedCount;
@property (nonatomic) int tappedCount;
@property (nonatomic) char hasBusinessId;
@property (nonatomic) unsigned long long businessId;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsResultType:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)resultTypeAsString:(int)a0;

@end
