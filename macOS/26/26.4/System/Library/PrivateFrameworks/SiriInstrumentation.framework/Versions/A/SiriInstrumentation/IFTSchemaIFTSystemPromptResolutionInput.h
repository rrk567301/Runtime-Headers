@class IFTSchemaIFTRequestContentTouchContent, IFTSchemaIFTRequestContentHeadGestureContent, IFTSchemaIFTRequestContentTextContent, NSData, IFTSchemaIFTRequestContentSpeechContent;

@interface IFTSchemaIFTSystemPromptResolutionInput : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTRequestContentTouchContent *touch;
@property (nonatomic) BOOL hasTouch;
@property (retain, nonatomic) IFTSchemaIFTRequestContentHeadGestureContent *headGesture;
@property (nonatomic) BOOL hasHeadGesture;
@property (retain, nonatomic) IFTSchemaIFTRequestContentTextContent *text;
@property (nonatomic) BOOL hasText;
@property (retain, nonatomic) IFTSchemaIFTRequestContentSpeechContent *speech;
@property (nonatomic) BOOL hasSpeech;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Systempromptresolutioninput;

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
- (void)deleteHeadGesture;
- (void)deleteSpeech;
- (void)deleteTouch;

@end
