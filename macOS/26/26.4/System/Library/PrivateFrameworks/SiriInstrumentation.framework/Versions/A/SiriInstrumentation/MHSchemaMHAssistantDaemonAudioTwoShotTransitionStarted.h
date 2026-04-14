@class NSData;

@interface MHSchemaMHAssistantDaemonAudioTwoShotTransitionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char promptType : 1; } _has;
}

@property (nonatomic) int promptType;
@property (nonatomic) BOOL hasPromptType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePromptType;

@end
