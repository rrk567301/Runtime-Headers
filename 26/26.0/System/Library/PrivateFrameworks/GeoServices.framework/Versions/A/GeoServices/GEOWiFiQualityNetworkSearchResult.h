@class NSMutableArray;

@interface GEOWiFiQualityNetworkSearchResult : PBCodable <NSCopying> {
    NSMutableArray *_matches;
}

@property (retain, nonatomic) NSMutableArray *matches;

+ (BOOL)isValid:(id)a0;
+ (Class)matchesType;

- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)matchesAtIndex:(unsigned long long)a0;
- (void)addMatches:(id)a0;
- (void)clearMatches;
- (unsigned long long)matchesCount;

@end
