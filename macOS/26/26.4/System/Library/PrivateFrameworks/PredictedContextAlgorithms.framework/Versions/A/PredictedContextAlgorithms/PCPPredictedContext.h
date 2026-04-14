@class PCPPredictedContextDateInterval, NSMutableArray;

@interface PCPPredictedContext : PBCodable <NSCopying> {
    struct { unsigned char probability : 1; unsigned char contextType : 1; } _has;
}

@property (nonatomic) BOOL hasContextType;
@property (nonatomic) int contextType;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) double probability;
@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) PCPPredictedContextDateInterval *dateInterval;
@property (retain, nonatomic) NSMutableArray *sources;

+ (Class)sourcesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearSources;
- (unsigned long long)sourcesCount;
- (id)sourcesAtIndex:(unsigned long long)a0;
- (void)addSources:(id)a0;
- (int)StringAsContextType:(id)a0;
- (id)contextTypeAsString:(int)a0;

@end
