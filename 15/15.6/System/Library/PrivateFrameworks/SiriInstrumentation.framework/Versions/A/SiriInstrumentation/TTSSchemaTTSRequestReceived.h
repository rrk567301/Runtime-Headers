@class TTSSchemaTTSVoiceContext, NSData, SISchemaUUID;

@interface TTSSchemaTTSRequestReceived : SISchemaInstrumentationMessage {
    struct { unsigned char inputTextLength : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *requestedVoiceContext;
@property (nonatomic) char hasRequestedVoiceContext;
@property (nonatomic) int inputTextLength;
@property (nonatomic) char hasInputTextLength;
@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) char hasContextId;
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
- (void)deleteContextId;
- (void)deleteInputTextLength;
- (void)deleteLinkId;
- (void)deleteRequestedVoiceContext;
- (id)suppressMessageUnderConditions;

@end
