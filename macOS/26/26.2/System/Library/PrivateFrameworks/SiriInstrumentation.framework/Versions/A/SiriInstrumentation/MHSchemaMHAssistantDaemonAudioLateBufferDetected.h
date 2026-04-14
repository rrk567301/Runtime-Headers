@class NSData;

@interface MHSchemaMHAssistantDaemonAudioLateBufferDetected : SISchemaInstrumentationMessage {
    struct { unsigned char bufferReceiptTimeOffsetInNs : 1; } _has;
}

@property (nonatomic) unsigned long long bufferReceiptTimeOffsetInNs;
@property (nonatomic) BOOL hasBufferReceiptTimeOffsetInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteBufferReceiptTimeOffsetInNs;

@end
