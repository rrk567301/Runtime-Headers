@class NSMutableArray, HVPBContentState;

@interface HVPBContentStateEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasState;
@property (retain, nonatomic) HVPBContentState *state;
@property (retain, nonatomic) NSMutableArray *uniqueIds;

+ (Class)uniqueIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addUniqueIds:(id)a0;
- (void)clearUniqueIds;
- (id)uniqueIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)uniqueIdsCount;

@end
