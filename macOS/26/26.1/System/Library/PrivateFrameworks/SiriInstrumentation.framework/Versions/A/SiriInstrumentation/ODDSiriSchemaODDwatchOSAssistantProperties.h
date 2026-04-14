@class NSData, ODDSiriSchemaODDHeadGestureProperties;

@interface ODDSiriSchemaODDwatchOSAssistantProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isRaiseToSpeakEnabled : 1; unsigned char isSiriTryItCompleted : 1; } _has;
}

@property (nonatomic) BOOL isRaiseToSpeakEnabled;
@property (nonatomic) BOOL hasIsRaiseToSpeakEnabled;
@property (nonatomic) BOOL isSiriTryItCompleted;
@property (nonatomic) BOOL hasIsSiriTryItCompleted;
@property (retain, nonatomic) ODDSiriSchemaODDHeadGestureProperties *headGestures;
@property (nonatomic) BOOL hasHeadGestures;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteHeadGestures;
- (void)deleteIsRaiseToSpeakEnabled;
- (void)deleteIsSiriTryItCompleted;

@end
