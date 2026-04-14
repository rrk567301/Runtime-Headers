@class NSString, NSMutableArray;

@interface ATXPBSpotlightSuggestionLayout : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _scores;
}

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *collections;
@property (readonly, nonatomic) unsigned long long scoresCount;
@property (readonly, nonatomic) double *scores;

+ (Class)collectionsType;

- (void)addScores:(double)a0;
- (id)collectionsAtIndex:(unsigned long long)a0;
- (void)clearScores;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCollections:(id)a0;
- (void)clearCollections;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (void)setScores:(double *)a0 count:(unsigned long long)a1;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (unsigned long long)collectionsCount;
- (id)dictionaryRepresentation;
- (double)scoresAtIndex:(unsigned long long)a0;
- (void)dealloc;

@end
