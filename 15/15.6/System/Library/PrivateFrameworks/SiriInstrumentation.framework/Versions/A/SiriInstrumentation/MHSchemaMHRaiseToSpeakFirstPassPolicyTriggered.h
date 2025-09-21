@class NSData;

@interface MHSchemaMHRaiseToSpeakFirstPassPolicyTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char isReplayModeEnabled : 1; unsigned char firstPassTriggerScore : 1; } _has;
}

@property (nonatomic) char isReplayModeEnabled;
@property (nonatomic) char hasIsReplayModeEnabled;
@property (nonatomic) double firstPassTriggerScore;
@property (nonatomic) char hasFirstPassTriggerScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFirstPassTriggerScore;
- (void)deleteIsReplayModeEnabled;
- (id)suppressMessageUnderConditions;

@end
