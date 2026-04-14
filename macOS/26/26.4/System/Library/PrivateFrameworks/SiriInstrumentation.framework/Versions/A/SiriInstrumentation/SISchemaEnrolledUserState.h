@class NSString, SISchemaPersonalization, NSData;

@interface SISchemaEnrolledUserState : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *siriLinkedSpeechID;
@property (nonatomic) BOOL hasSiriLinkedSpeechID;
@property (retain, nonatomic) SISchemaPersonalization *personalization;
@property (nonatomic) BOOL hasPersonalization;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePersonalization;
- (void)deleteSiriLinkedSpeechID;

@end
