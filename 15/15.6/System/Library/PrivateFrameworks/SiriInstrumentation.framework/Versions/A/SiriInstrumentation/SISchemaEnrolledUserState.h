@class NSString, SISchemaPersonalization, NSData;

@interface SISchemaEnrolledUserState : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *siriLinkedSpeechID;
@property (nonatomic) char hasSiriLinkedSpeechID;
@property (retain, nonatomic) SISchemaPersonalization *personalization;
@property (nonatomic) char hasPersonalization;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePersonalization;
- (void)deleteSiriLinkedSpeechID;
- (id)suppressMessageUnderConditions;

@end
