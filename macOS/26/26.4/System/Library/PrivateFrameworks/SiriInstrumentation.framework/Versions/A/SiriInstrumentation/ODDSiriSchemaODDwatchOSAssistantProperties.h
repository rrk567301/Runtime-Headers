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
- (void)deleteHeadGestures;
- (void)deleteIsRaiseToSpeakEnabled;
- (void)deleteIsSiriTryItCompleted;

@end
