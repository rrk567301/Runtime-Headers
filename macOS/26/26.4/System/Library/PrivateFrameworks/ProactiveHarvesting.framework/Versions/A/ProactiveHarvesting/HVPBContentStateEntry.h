@class NSMutableArray, HVPBContentState;

@interface HVPBContentStateEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasState;
@property (retain, nonatomic) HVPBContentState *state;
@property (retain, nonatomic) NSMutableArray *uniqueIds;

+ (Class)uniqueIdsType;

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
- (void)addUniqueIds:(id)a0;
- (void)clearUniqueIds;
- (id)uniqueIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)uniqueIdsCount;

@end
