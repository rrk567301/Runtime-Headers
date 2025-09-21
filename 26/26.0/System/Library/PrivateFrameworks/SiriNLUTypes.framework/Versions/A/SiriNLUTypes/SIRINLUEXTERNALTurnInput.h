@class NSString, SIRINLUEXTERNALCorrectionOutcome, SIRINLUEXTERNALSystemDialogActGroup, SIRINLUEXTERNALTurnContext, NSMutableArray;

@interface SIRINLUEXTERNALTurnInput : PBCodable <NSCopying> {
    struct { unsigned char startTimestamp : 1; unsigned char connectedToCarPlayUltra : 1; unsigned char tapToEdit : 1; } _has;
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
@property (readonly, nonatomic) BOOL hasCorrectionOutcomeOverride;
@property (retain, nonatomic) SIRINLUEXTERNALCorrectionOutcome *correctionOutcomeOverride;
@property (nonatomic) BOOL hasConnectedToCarPlayUltra;
@property (nonatomic) BOOL connectedToCarPlayUltra;

+ (Class)activeTasksType;
+ (Class)asrOutputsType;
+ (Class)executedTasksType;
+ (Class)salientEntitiesType;

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
