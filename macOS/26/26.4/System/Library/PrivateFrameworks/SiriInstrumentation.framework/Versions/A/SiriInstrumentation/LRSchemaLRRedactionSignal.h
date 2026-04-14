@class NSData, LRSchemaLRTimespanRedactionSignal, LRSchemaLRComponentIdentifierRedactionSignal;

@interface LRSchemaLRRedactionSignal : SISchemaInstrumentationMessage {
    struct { unsigned char sensitivityState : 1; unsigned char signalTimeNanosecondsSinceBoot : 1; } _has;
}

@property (nonatomic) int sensitivityState;
@property (nonatomic) BOOL hasSensitivityState;
@property (nonatomic) unsigned long long signalTimeNanosecondsSinceBoot;
@property (nonatomic) BOOL hasSignalTimeNanosecondsSinceBoot;
@property (nonatomic) BOOL isEntireClockAffected;
@property (nonatomic) BOOL hasIsEntireClockAffected;
@property (retain, nonatomic) LRSchemaLRTimespanRedactionSignal *timeSpan;
@property (nonatomic) BOOL hasTimeSpan;
@property (retain, nonatomic) LRSchemaLRComponentIdentifierRedactionSignal *componentId;
@property (nonatomic) BOOL hasComponentId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSignal;

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
- (void)deleteComponentId;
- (void)deleteIsEntireClockAffected;
- (void)deleteSensitivityState;
- (void)deleteSignalTimeNanosecondsSinceBoot;
- (void)deleteTimeSpan;

@end
