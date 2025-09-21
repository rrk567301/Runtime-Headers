@class MTSchemaMTLocalePair, NSData, SISchemaUUID;

@interface MTSchemaMTAppInvocationMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char displayMode : 1; unsigned char isGenderAlternativeEnabled : 1; unsigned char tabName : 1; unsigned char isPlayTranslationsEnabled : 1; unsigned char conversationTabView : 1; unsigned char audioChannel : 1; } _has;
}

@property (nonatomic) int displayMode;
@property (nonatomic) char hasDisplayMode;
@property (retain, nonatomic) MTSchemaMTLocalePair *localePair;
@property (nonatomic) char hasLocalePair;
@property (nonatomic) char isGenderAlternativeEnabled;
@property (nonatomic) char hasIsGenderAlternativeEnabled;
@property (nonatomic) int tabName;
@property (nonatomic) char hasTabName;
@property (retain, nonatomic) SISchemaUUID *tabSessionId;
@property (nonatomic) char hasTabSessionId;
@property (retain, nonatomic) SISchemaUUID *autoTranslateSessionId;
@property (nonatomic) char hasAutoTranslateSessionId;
@property (nonatomic) char isPlayTranslationsEnabled;
@property (nonatomic) char hasIsPlayTranslationsEnabled;
@property (nonatomic) int conversationTabView;
@property (nonatomic) char hasConversationTabView;
@property (nonatomic) int audioChannel;
@property (nonatomic) char hasAudioChannel;
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
- (void)deleteIsPlayTranslationsEnabled;
- (void)deleteAudioChannel;
- (void)deleteAutoTranslateSessionId;
- (void)deleteConversationTabView;
- (void)deleteDisplayMode;
- (void)deleteIsGenderAlternativeEnabled;
- (void)deleteLocalePair;
- (void)deleteTabName;
- (void)deleteTabSessionId;
- (id)suppressMessageUnderConditions;

@end
