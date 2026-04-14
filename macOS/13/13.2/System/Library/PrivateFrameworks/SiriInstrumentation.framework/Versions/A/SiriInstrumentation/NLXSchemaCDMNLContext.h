@class NSArray, NSData;

@interface NLXSchemaCDMNLContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *activeTasks;
@property (copy, nonatomic) NSArray *executedTasks;
@property (copy, nonatomic) NSArray *salientEntities;
@property (copy, nonatomic) NSArray *systemDialogActs;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearActiveTasks;
- (void)deleteActiveTasks;
- (void)addActiveTasks:(id)a0;
- (unsigned long long)activeTasksCount;
- (id)activeTasksAtIndex:(unsigned long long)a0;
- (void)clearExecutedTasks;
- (void)deleteExecutedTasks;
- (void)addExecutedTasks:(id)a0;
- (unsigned long long)executedTasksCount;
- (id)executedTasksAtIndex:(unsigned long long)a0;
- (void)clearSalientEntities;
- (void)deleteSalientEntities;
- (void)addSalientEntities:(id)a0;
- (unsigned long long)salientEntitiesCount;
- (id)salientEntitiesAtIndex:(unsigned long long)a0;
- (void)clearSystemDialogActs;
- (void)deleteSystemDialogActs;
- (void)addSystemDialogActs:(id)a0;
- (unsigned long long)systemDialogActsCount;
- (id)systemDialogActsAtIndex:(unsigned long long)a0;

@end
