@class NSData;

@interface RTSSchemaRTSFirstPassPolicyTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char isReplayModeEnabled : 1; unsigned char firstPassTriggerScore : 1; } _has;
}

@property (nonatomic) BOOL isReplayModeEnabled;
@property (nonatomic) BOOL hasIsReplayModeEnabled;
@property (nonatomic) double firstPassTriggerScore;
@property (nonatomic) BOOL hasFirstPassTriggerScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteFirstPassTriggerScore;
- (void)deleteIsReplayModeEnabled;

@end
