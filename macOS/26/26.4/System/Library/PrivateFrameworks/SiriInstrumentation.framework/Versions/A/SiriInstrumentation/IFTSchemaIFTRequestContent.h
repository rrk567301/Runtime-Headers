@class IFTSchemaIFTSystemPromptResolution, NSData, IFTSchemaIFTRequestContentTextContent, IFTSchemaIFTRequestContentStopContent, IFTSchemaIFTRequestContentSpeechContent;

@interface IFTSchemaIFTRequestContent : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTRequestContentTextContent *text;
@property (nonatomic) BOOL hasText;
@property (retain, nonatomic) IFTSchemaIFTRequestContentSpeechContent *speech;
@property (nonatomic) BOOL hasSpeech;
@property (retain, nonatomic) IFTSchemaIFTSystemPromptResolution *promptResolution;
@property (nonatomic) BOOL hasPromptResolution;
@property (retain, nonatomic) IFTSchemaIFTRequestContentStopContent *stop;
@property (nonatomic) BOOL hasStop;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Requestcontent;

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
- (void)deleteText;
- (void)deletePromptResolution;
- (void)deleteSpeech;
- (void)deleteStop;

@end
