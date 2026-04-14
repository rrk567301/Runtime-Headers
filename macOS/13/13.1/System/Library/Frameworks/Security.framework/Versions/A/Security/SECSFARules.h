@class NSMutableArray;

@interface SECSFARules : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *rules;

+ (Class)rulesType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearRules;
- (void)addRules:(id)a0;
- (unsigned long long)rulesCount;
- (id)rulesAtIndex:(unsigned long long)a0;

@end
