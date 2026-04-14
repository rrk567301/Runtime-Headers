@class NSMutableArray;

@interface NPKProtoRelevantPassesRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *passRelevancyTuples;

+ (Class)passRelevancyTuplesType;

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
- (void)addPassRelevancyTuples:(id)a0;
- (void)clearPassRelevancyTuples;
- (id)passRelevancyTuplesAtIndex:(unsigned long long)a0;
- (unsigned long long)passRelevancyTuplesCount;

@end
