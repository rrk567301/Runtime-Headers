@class NSString, SIRINLUEXTERNALCorrectionOutcome, SIRINLUEXTERNALSystemDialogActGroup, SIRINLUEXTERNALTurnContext, NSMutableArray;

@interface SIRINLUEXTERNALTurnInput : PBCodable <NSCopying> {
    struct { unsigned char startTimestamp : 1; unsigned char connectedToCarPlayUltra : 1; unsigned char tapToEdit : 1; } _has;
}

@property (readonly, nonatomic) char hasSystemDialogActGroup;
@property (retain, nonatomic) SIRINLUEXTERNALSystemDialogActGroup *systemDialogActGroup;
@property (retain, nonatomic) NSMutableArray *salientEntities;
@property (retain, nonatomic) NSMutableArray *activeTasks;
@property (retain, nonatomic) NSMutableArray *executedTasks;
@property (retain, nonatomic) NSMutableArray *asrOutputs;
@property (readonly, nonatomic) char hasTurnContext;
@property (retain, nonatomic) SIRINLUEXTERNALTurnContext *turnContext;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) char hasTapToEdit;
@property (nonatomic) char tapToEdit;
@property (nonatomic) char hasStartTimestamp;
@property (nonatomic) unsigned long long startTimestamp;
@property (readonly, nonatomic) char hasCorrectionOutcomeOverride;
@property (retain, nonatomic) SIRINLUEXTERNALCorrectionOutcome *correctionOutcomeOverride;
@property (nonatomic) char hasConnectedToCarPlayUltra;
@property (nonatomic) char connectedToCarPlayUltra;

+ (Class)activeTasksType;
+ (Class)asrOutputsType;
+ (Class)executedTasksType;
+ (Class)salientEntitiesType;

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
- (void)addActiveTasks:(id)a0;
- (id)activeTasksAtIndex:(unsigned long long)a0;
- (unsigned long long)activeTasksCount;
- (void)addExecutedTasks:(id)a0;
- (void)addSalientEntities:(id)a0;
- (void)clearActiveTasks;
- (void)clearExecutedTasks;
- (void)clearSalientEntities;
- (id)executedTasksAtIndex:(unsigned long long)a0;
- (unsigned long long)executedTasksCount;
- (id)salientEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)salientEntitiesCount;
- (unsigned long long)asrOutputsCount;
- (void)clearAsrOutputs;
- (void)addAsrOutputs:(id)a0;
- (id)asrOutputsAtIndex:(unsigned long long)a0;

@end
