@class NSString, NSData, SISchemaUUID;

@interface DUSchemaDUSpeechAudioRecord : SISchemaInstrumentationMessage {
    struct { unsigned char audioCreatedTimestampMs : 1; } _has;
}

@property (copy, nonatomic) NSString *language;
@property (nonatomic) BOOL hasLanguage;
@property (copy, nonatomic) NSString *codec;
@property (nonatomic) BOOL hasCodec;
@property (retain, nonatomic) SISchemaUUID *interactionId;
@property (nonatomic) BOOL hasInteractionId;
@property (retain, nonatomic) SISchemaUUID *speechId;
@property (nonatomic) BOOL hasSpeechId;
@property (copy, nonatomic) NSString *speechIdString;
@property (nonatomic) BOOL hasSpeechIdString;
@property (nonatomic) unsigned long long audioCreatedTimestampMs;
@property (nonatomic) BOOL hasAudioCreatedTimestampMs;
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
- (void)deleteAudioCreatedTimestampMs;
- (void)deleteCodec;
- (void)deleteInteractionId;
- (void)deleteLanguage;
- (void)deleteSpeechId;
- (void)deleteSpeechIdString;

@end
