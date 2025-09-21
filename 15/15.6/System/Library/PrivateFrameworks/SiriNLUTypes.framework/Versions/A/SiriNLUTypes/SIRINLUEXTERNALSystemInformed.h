@class SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUEXTERNALSystemInformed : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTaskId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *taskId;
@property (retain, nonatomic) NSMutableArray *entities;

+ (Class)entitiesType;

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
- (void)addEntities:(id)a0;
- (void)clearEntities;
- (id)entitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)entitiesCount;

@end
