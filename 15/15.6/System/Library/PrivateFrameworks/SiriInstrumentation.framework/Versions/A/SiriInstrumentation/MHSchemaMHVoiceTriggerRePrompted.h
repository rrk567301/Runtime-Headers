@class NSString, NSData;

@interface MHSchemaMHVoiceTriggerRePrompted : SISchemaInstrumentationMessage {
    struct { unsigned char isRePrompted : 1; } _has;
}

@property (copy, nonatomic) NSString *siriSpeechID;
@property (nonatomic) char hasSiriSpeechID;
@property (nonatomic) char isRePrompted;
@property (nonatomic) char hasIsRePrompted;
@property (copy, nonatomic) NSString *lastWhenRePrompted;
@property (nonatomic) char hasLastWhenRePrompted;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsRePrompted;
- (void)deleteLastWhenRePrompted;
- (void)deleteSiriSpeechID;
- (id)suppressMessageUnderConditions;

@end
