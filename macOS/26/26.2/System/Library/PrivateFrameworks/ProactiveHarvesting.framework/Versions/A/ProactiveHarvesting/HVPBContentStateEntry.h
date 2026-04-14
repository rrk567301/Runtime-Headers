@class NSMutableArray, HVPBContentState;

@interface HVPBContentStateEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasState;
@property (retain, nonatomic) HVPBContentState *state;
@property (retain, nonatomic) NSMutableArray *uniqueIds;

+ (Class)uniqueIdsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addUniqueIds:(id)a0;
- (void)clearUniqueIds;
- (id)uniqueIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)uniqueIdsCount;

@end
