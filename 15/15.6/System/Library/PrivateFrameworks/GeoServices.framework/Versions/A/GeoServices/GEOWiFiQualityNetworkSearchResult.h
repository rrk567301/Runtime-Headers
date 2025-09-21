@class NSMutableArray;

@interface GEOWiFiQualityNetworkSearchResult : PBCodable <NSCopying> {
    NSMutableArray *_matches;
}

@property (retain, nonatomic) NSMutableArray *matches;

+ (char)isValid:(id)a0;
+ (Class)matchesType;

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
- (id)matchesAtIndex:(unsigned long long)a0;
- (void)addMatches:(id)a0;
- (void)clearMatches;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)matchesCount;
- (void)readAll:(char)a0;

@end
