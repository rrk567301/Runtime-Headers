@class NSString, NSData, SISchemaUUID;

@interface DUSchemaDUSpeechAudioRecord : SISchemaInstrumentationMessage {
    struct { unsigned char audioCreatedTimestampMs : 1; } _has;
}

@property (copy, nonatomic) NSString *language;
@property (nonatomic) char hasLanguage;
@property (copy, nonatomic) NSString *codec;
@property (nonatomic) char hasCodec;
@property (retain, nonatomic) SISchemaUUID *interactionId;
@property (nonatomic) char hasInteractionId;
@property (retain, nonatomic) SISchemaUUID *speechId;
@property (nonatomic) char hasSpeechId;
@property (copy, nonatomic) NSString *speechIdString;
@property (nonatomic) char hasSpeechIdString;
@property (nonatomic) unsigned long long audioCreatedTimestampMs;
@property (nonatomic) char hasAudioCreatedTimestampMs;
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
- (void)deleteAudioCreatedTimestampMs;
- (void)deleteCodec;
- (void)deleteInteractionId;
- (void)deleteLanguage;
- (void)deleteSpeechId;
- (void)deleteSpeechIdString;
- (id)suppressMessageUnderConditions;

@end
