@class NSData;

@interface ASRSpeechProfileSchemaASRSpeechProfileUpdateFailed : SISchemaInstrumentationMessage {
    struct { unsigned char speechProfileUpdateFailureReason : 1; } _has;
}

@property (nonatomic) int speechProfileUpdateFailureReason;
@property (nonatomic) BOOL hasSpeechProfileUpdateFailureReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSpeechProfileUpdateFailureReason;

@end
