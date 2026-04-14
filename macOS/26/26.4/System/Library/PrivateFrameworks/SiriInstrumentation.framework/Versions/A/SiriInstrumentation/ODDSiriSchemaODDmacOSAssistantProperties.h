@class NSData, ODDSiriSchemaODDHeadGestureProperties;

@interface ODDSiriSchemaODDmacOSAssistantProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isExternalMicrophoneHSEnabled : 1; } _has;
}

@property (nonatomic) BOOL isExternalMicrophoneHSEnabled;
@property (nonatomic) BOOL hasIsExternalMicrophoneHSEnabled;
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
- (void)deleteIsExternalMicrophoneHSEnabled;

@end
