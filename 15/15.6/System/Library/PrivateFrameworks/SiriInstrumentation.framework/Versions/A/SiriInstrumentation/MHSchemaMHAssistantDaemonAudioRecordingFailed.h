@class NSString, NSData;

@interface MHSchemaMHAssistantDaemonAudioRecordingFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) char hasReason;
@property (copy, nonatomic) NSString *audioInterfaceVendorId;
@property (nonatomic) char hasAudioInterfaceVendorId;
@property (copy, nonatomic) NSString *audioInterfaceProductId;
@property (nonatomic) char hasAudioInterfaceProductId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)deleteAudioInterfaceProductId;
- (void)deleteAudioInterfaceVendorId;
- (id)suppressMessageUnderConditions;

@end
