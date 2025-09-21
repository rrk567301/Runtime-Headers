@class NSString, NSData;

@interface MHSchemaMHVoiceTriggerRePrompted : SISchemaInstrumentationMessage {
    struct { unsigned char isRePrompted : 1; } _has;
}

@property (copy, nonatomic) NSString *siriSpeechID;
@property (nonatomic) BOOL hasSiriSpeechID;
@property (nonatomic) BOOL isRePrompted;
@property (nonatomic) BOOL hasIsRePrompted;
@property (copy, nonatomic) NSString *lastWhenRePrompted;
@property (nonatomic) BOOL hasLastWhenRePrompted;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteIsRePrompted;
- (void)deleteLastWhenRePrompted;
- (void)deleteSiriSpeechID;

@end
