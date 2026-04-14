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

- (id)dictionaryRepresentation;
- (void)clearCollections;
- (unsigned long long)hash;
- (void)addScores:(double)a0;
- (void)setScores:(double *)a0 count:(unsigned long long)a1;
- (double)scoresAtIndex:(unsigned long long)a0;
- (void)addCollections:(id)a0;
- (id)collectionsAtIndex:(unsigned long long)a0;
- (id)description;
- (void)dealloc;
- (void)clearScores;
- (unsigned long long)collectionsCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
