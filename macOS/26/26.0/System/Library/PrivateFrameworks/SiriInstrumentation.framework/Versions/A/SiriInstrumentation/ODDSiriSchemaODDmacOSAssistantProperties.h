@class NSData, ODDSiriSchemaODDHeadGestureProperties;

@interface ODDSiriSchemaODDmacOSAssistantProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isExternalMicrophoneHSEnabled : 1; } _has;
}

@property (nonatomic) BOOL isExternalMicrophoneHSEnabled;
@property (nonatomic) BOOL hasIsExternalMicrophoneHSEnabled;
@property (retain, nonatomic) ODDSiriSchemaODDHeadGestureProperties *headGestures;
@property (nonatomic) BOOL hasHeadGestures;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteHeadGestures;
- (void)deleteIsExternalMicrophoneHSEnabled;

@end
