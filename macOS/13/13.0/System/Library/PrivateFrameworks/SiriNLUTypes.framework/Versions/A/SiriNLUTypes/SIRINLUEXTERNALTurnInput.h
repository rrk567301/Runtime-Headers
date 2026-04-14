@class NSString, SIRINLUEXTERNALSystemDialogActGroup, SIRINLUEXTERNALTurnContext, NSMutableArray;

@interface SIRINLUEXTERNALTurnInput : PBCodable <NSCopying> {
    struct { unsigned char startTimestamp : 1; unsigned char tapToEdit : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSystemDialogActGroup;
@property (retain, nonatomic) SIRINLUEXTERNALSystemDialogActGroup *systemDialogActGroup;
@property (retain, nonatomic) NSMutableArray *salientEntities;
@property (retain, nonatomic) NSMutableArray *activeTasks;
@property (retain, nonatomic) NSMutableArray *executedTasks;
@property (retain, nonatomic) NSMutableArray *asrOutputs;
@property (readonly, nonatomic) BOOL hasTurnContext;
@property (retain, nonatomic) SIRINLUEXTERNALTurnContext *turnContext;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) BOOL hasTapToEdit;
@property (nonatomic) BOOL tapToEdit;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) unsigned long long startTimestamp;

+ (Class)salientEntitiesType;
+ (Class)activeTasksType;
+ (Class)executedTasksType;
+ (Class)asrOutputsType;

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
- (void)clearAsrOutputs;
- (void)addAsrOutputs:(id)a0;
- (unsigned long long)asrOutputsCount;
- (id)asrOutputsAtIndex:(unsigned long long)a0;

@end
