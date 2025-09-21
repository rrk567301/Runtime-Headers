@class NSMutableArray;

@interface SIRINLUEXTERNALNLU_ROUTERNLRouterTurnContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *activeTasks;
@property (retain, nonatomic) NSMutableArray *executedTasks;
@property (retain, nonatomic) NSMutableArray *systemDialogActs;
@property (retain, nonatomic) NSMutableArray *salientEntities;

+ (Class)activeTasksType;
+ (Class)executedTasksType;
+ (Class)salientEntitiesType;
+ (Class)systemDialogActsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addActiveTasks:(id)a0;
- (id)activeTasksAtIndex:(unsigned long long)a0;
- (unsigned long long)activeTasksCount;
- (void)addExecutedTasks:(id)a0;
- (void)addSalientEntities:(id)a0;
- (void)addSystemDialogActs:(id)a0;
- (void)clearActiveTasks;
- (void)clearExecutedTasks;
- (void)clearSalientEntities;
- (void)clearSystemDialogActs;
- (id)executedTasksAtIndex:(unsigned long long)a0;
- (unsigned long long)executedTasksCount;
- (id)salientEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)salientEntitiesCount;
- (id)systemDialogActsAtIndex:(unsigned long long)a0;
- (unsigned long long)systemDialogActsCount;

@end
