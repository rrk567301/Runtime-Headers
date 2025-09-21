@class NSString, NSData, SISchemaUUID;

@interface NLXSchemaNLXLegacyNLContext : SISchemaInstrumentationMessage {
    struct { unsigned char isDictationPrompt : 1; unsigned char isStrictPrompt : 1; unsigned char isListenAfterSpeaking : 1; unsigned char legacyContextSource : 1; } _has;
}

@property (nonatomic) char isDictationPrompt;
@property (nonatomic) char hasIsDictationPrompt;
@property (nonatomic) char isStrictPrompt;
@property (nonatomic) char hasIsStrictPrompt;
@property (copy, nonatomic) NSString *previousDomainName;
@property (nonatomic) char hasPreviousDomainName;
@property (nonatomic) char isListenAfterSpeaking;
@property (nonatomic) char hasIsListenAfterSpeaking;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) int legacyContextSource;
@property (nonatomic) char hasLegacyContextSource;
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
- (void)deleteIsDictationPrompt;
- (void)deleteIsListenAfterSpeaking;
- (void)deleteIsStrictPrompt;
- (void)deleteLegacyContextSource;
- (void)deleteLinkId;
- (void)deletePreviousDomainName;
- (id)suppressMessageUnderConditions;

@end
