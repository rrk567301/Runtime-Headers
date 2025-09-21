@class NSData;

@interface MHSchemaMHAssistantDaemonAudioStopRecordingeStarted : SISchemaInstrumentationMessage {
    struct { unsigned char stopReason : 1; } _has;
}

@property (nonatomic) int stopReason;
@property (nonatomic) char hasStopReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteStopReason;
- (id)suppressMessageUnderConditions;

@end
