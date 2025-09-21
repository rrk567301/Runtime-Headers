@class IFTSchemaIFTRequestContentTouchContent, IFTSchemaIFTRequestContentHeadGestureContent, IFTSchemaIFTRequestContentTextContent, NSData, IFTSchemaIFTRequestContentSpeechContent;

@interface IFTSchemaIFTSystemPromptResolutionInput : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTRequestContentTouchContent *touch;
@property (nonatomic) char hasTouch;
@property (retain, nonatomic) IFTSchemaIFTRequestContentHeadGestureContent *headGesture;
@property (nonatomic) char hasHeadGesture;
@property (retain, nonatomic) IFTSchemaIFTRequestContentTextContent *text;
@property (nonatomic) char hasText;
@property (retain, nonatomic) IFTSchemaIFTRequestContentSpeechContent *speech;
@property (nonatomic) char hasSpeech;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Systempromptresolutioninput;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteText;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteHeadGesture;
- (void)deleteSpeech;
- (void)deleteTouch;
- (id)suppressMessageUnderConditions;

@end
