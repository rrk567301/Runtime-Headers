@class NSMutableArray;

@interface SECSFARules : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *rules;

+ (Class)rulesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addRules:(id)a0;
- (void)clearRules;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)rulesAtIndex:(unsigned long long)a0;
- (unsigned long long)rulesCount;
- (void)writeTo:(id)a0;

@end
