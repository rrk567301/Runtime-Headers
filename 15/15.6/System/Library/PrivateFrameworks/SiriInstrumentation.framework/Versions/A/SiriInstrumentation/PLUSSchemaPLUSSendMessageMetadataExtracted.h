@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSSendMessageMetadataExtracted : SISchemaInstrumentationMessage {
    struct { unsigned char initialSendMessageRequestNumberOfContacts : 1; unsigned char initialSendMessageRequestHasPayload : 1; unsigned char numberOfTimesMessageContactChanged : 1; unsigned char numberOfTimesMessagePayloadChanged : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) char hasOriginalPlusId;
@property (nonatomic) unsigned int initialSendMessageRequestNumberOfContacts;
@property (nonatomic) char hasInitialSendMessageRequestNumberOfContacts;
@property (nonatomic) char initialSendMessageRequestHasPayload;
@property (nonatomic) char hasInitialSendMessageRequestHasPayload;
@property (nonatomic) unsigned int numberOfTimesMessageContactChanged;
@property (nonatomic) char hasNumberOfTimesMessageContactChanged;
@property (nonatomic) unsigned int numberOfTimesMessagePayloadChanged;
@property (nonatomic) char hasNumberOfTimesMessagePayloadChanged;
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
- (void)deleteInitialSendMessageRequestHasPayload;
- (void)deleteInitialSendMessageRequestNumberOfContacts;
- (void)deleteNumberOfTimesMessageContactChanged;
- (void)deleteNumberOfTimesMessagePayloadChanged;
- (void)deleteOriginalPlusId;
- (id)suppressMessageUnderConditions;

@end
