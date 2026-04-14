@class NSData;

@interface ASRSchemaASRLMEOverActivationEdit : SISchemaInstrumentationMessage {
    struct { unsigned char speechProfileCategory : 1; } _has;
}

@property (nonatomic) int speechProfileCategory;
@property (nonatomic) BOOL hasSpeechProfileCategory;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteSpeechProfileCategory;

@end
