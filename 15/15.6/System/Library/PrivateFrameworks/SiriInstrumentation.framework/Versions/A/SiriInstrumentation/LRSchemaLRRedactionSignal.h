@class NSData, LRSchemaLRTimespanRedactionSignal, LRSchemaLRComponentIdentifierRedactionSignal;

@interface LRSchemaLRRedactionSignal : SISchemaInstrumentationMessage {
    struct { unsigned char sensitivityState : 1; unsigned char signalTimeNanosecondsSinceBoot : 1; } _has;
}

@property (nonatomic) int sensitivityState;
@property (nonatomic) char hasSensitivityState;
@property (nonatomic) unsigned long long signalTimeNanosecondsSinceBoot;
@property (nonatomic) char hasSignalTimeNanosecondsSinceBoot;
@property (nonatomic) char isEntireClockAffected;
@property (nonatomic) char hasIsEntireClockAffected;
@property (retain, nonatomic) LRSchemaLRTimespanRedactionSignal *timeSpan;
@property (nonatomic) char hasTimeSpan;
@property (retain, nonatomic) LRSchemaLRComponentIdentifierRedactionSignal *componentId;
@property (nonatomic) char hasComponentId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSignal;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteComponentId;
- (void)deleteIsEntireClockAffected;
- (void)deleteSensitivityState;
- (void)deleteSignalTimeNanosecondsSinceBoot;
- (void)deleteTimeSpan;
- (id)suppressMessageUnderConditions;

@end
