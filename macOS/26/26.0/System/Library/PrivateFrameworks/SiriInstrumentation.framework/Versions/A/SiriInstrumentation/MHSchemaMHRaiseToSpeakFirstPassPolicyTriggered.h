@class NSData;

@interface MHSchemaMHRaiseToSpeakFirstPassPolicyTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char isReplayModeEnabled : 1; unsigned char firstPassTriggerScore : 1; } _has;
}

@property (nonatomic) BOOL isReplayModeEnabled;
@property (nonatomic) BOOL hasIsReplayModeEnabled;
@property (nonatomic) double firstPassTriggerScore;
@property (nonatomic) BOOL hasFirstPassTriggerScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteFirstPassTriggerScore;
- (void)deleteIsReplayModeEnabled;

@end
