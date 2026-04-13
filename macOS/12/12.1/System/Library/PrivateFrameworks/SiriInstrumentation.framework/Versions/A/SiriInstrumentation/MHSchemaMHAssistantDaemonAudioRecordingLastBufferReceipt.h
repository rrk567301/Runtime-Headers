@class NSData;

@interface MHSchemaMHAssistantDaemonAudioRecordingLastBufferReceipt : SISchemaInstrumentationMessage {
    struct { unsigned char lastAudioRecordBufferReceiptTimeOffsetInNs : 1; } _has;
}

@property (nonatomic) unsigned long long lastAudioRecordBufferReceiptTimeOffsetInNs;
@property (nonatomic) BOOL hasLastAudioRecordBufferReceiptTimeOffsetInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
