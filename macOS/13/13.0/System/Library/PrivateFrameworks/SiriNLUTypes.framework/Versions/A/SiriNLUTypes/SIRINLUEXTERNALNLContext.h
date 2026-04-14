@class SIRINLUEXTERNALSystemDialogActGroup, NSMutableArray;

@interface SIRINLUEXTERNALNLContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSystemDialogActGroup;
@property (retain, nonatomic) SIRINLUEXTERNALSystemDialogActGroup *systemDialogActGroup;
@property (retain, nonatomic) NSMutableArray *activeTasks;
@property (retain, nonatomic) NSMutableArray *executedTasks;
@property (retain, nonatomic) NSMutableArray *salientEntities;
@property (retain, nonatomic) NSMutableArray *systemDialogActs;

+ (Class)systemDialogActsType;
+ (Class)salientEntitiesType;
+ (Class)activeTasksType;
+ (Class)executedTasksType;

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
- (void)clearActiveTasks;
- (void)addActiveTasks:(id)a0;
- (unsigned long long)activeTasksCount;
- (id)activeTasksAtIndex:(unsigned long long)a0;
- (void)clearExecutedTasks;
- (void)addExecutedTasks:(id)a0;
- (unsigned long long)executedTasksCount;
- (id)executedTasksAtIndex:(unsigned long long)a0;
- (void)clearSalientEntities;
- (void)addSalientEntities:(id)a0;
- (unsigned long long)salientEntitiesCount;
- (id)salientEntitiesAtIndex:(unsigned long long)a0;
- (void)clearSystemDialogActs;
- (void)addSystemDialogActs:(id)a0;
- (unsigned long long)systemDialogActsCount;
- (id)systemDialogActsAtIndex:(unsigned long long)a0;

@end
