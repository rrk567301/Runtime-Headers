@class NSData;

@interface MHSchemaMHAssistantDaemonAudioRecordinFirstBufferReceipt : SISchemaInstrumentationMessage {
    struct { unsigned char firstBufferReceiptTimeOffsetInNs : 1; } _has;
}

@property (nonatomic) unsigned long long firstBufferReceiptTimeOffsetInNs;
@property (nonatomic) BOOL hasFirstBufferReceiptTimeOffsetInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteFirstBufferReceiptTimeOffsetInNs;

@end
