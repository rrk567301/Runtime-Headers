@class NSArray, NSData;

@interface ExecutorSiriSchemaExecutorAppIntentMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char connectionDurationInNanoSeconds : 1; unsigned char executorAppIntentTargetType : 1; unsigned char isProcessLaunchRequired : 1; unsigned char isAppBroughtToForeground : 1; unsigned char startedLiveActivity : 1; } _has;
}

@property (nonatomic) double connectionDurationInNanoSeconds;
@property (nonatomic) BOOL hasConnectionDurationInNanoSeconds;
@property (nonatomic) int executorAppIntentTargetType;
@property (nonatomic) BOOL hasExecutorAppIntentTargetType;
@property (nonatomic) BOOL isProcessLaunchRequired;
@property (nonatomic) BOOL hasIsProcessLaunchRequired;
@property (nonatomic) BOOL isAppBroughtToForeground;
@property (nonatomic) BOOL hasIsAppBroughtToForeground;
@property (nonatomic) BOOL startedLiveActivity;
@property (nonatomic) BOOL hasStartedLiveActivity;
@property (copy, nonatomic) NSArray *executorAppIntentSegments;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExecutorAppIntentSegments;
- (void)addExecutorAppIntentSegments:(id)a0;
- (void)clearExecutorAppIntentSegments;
- (void)deleteConnectionDurationInNanoSeconds;
- (void)deleteExecutorAppIntentTargetType;
- (void)deleteIsAppBroughtToForeground;
- (void)deleteIsProcessLaunchRequired;
- (void)deleteStartedLiveActivity;
- (id)executorAppIntentSegmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)executorAppIntentSegmentsCount;

@end
