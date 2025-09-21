@class NSData, ODDSiriSchemaODDHeadGestureProperties;

@interface ODDSiriSchemaODDwatchOSAssistantProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isRaiseToSpeakEnabled : 1; unsigned char isSiriTryItCompleted : 1; } _has;
}

@property (nonatomic) char isRaiseToSpeakEnabled;
@property (nonatomic) char hasIsRaiseToSpeakEnabled;
@property (nonatomic) char isSiriTryItCompleted;
@property (nonatomic) char hasIsSiriTryItCompleted;
@property (retain, nonatomic) ODDSiriSchemaODDHeadGestureProperties *headGestures;
@property (nonatomic) char hasHeadGestures;
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
- (void)deleteHeadGestures;
- (void)deleteIsRaiseToSpeakEnabled;
- (void)deleteIsSiriTryItCompleted;
- (id)suppressMessageUnderConditions;

@end
