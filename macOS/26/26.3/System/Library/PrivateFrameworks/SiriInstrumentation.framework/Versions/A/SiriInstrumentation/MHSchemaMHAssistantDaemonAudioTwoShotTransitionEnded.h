@class NSData;

@interface MHSchemaMHAssistantDaemonAudioTwoShotTransitionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char suppresedAlert : 1; unsigned char timedOut : 1; } _has;
}

@property (nonatomic) BOOL suppresedAlert;
@property (nonatomic) BOOL hasSuppresedAlert;
@property (nonatomic) BOOL timedOut;
@property (nonatomic) BOOL hasTimedOut;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteSuppresedAlert;
- (void)deleteTimedOut;

@end
