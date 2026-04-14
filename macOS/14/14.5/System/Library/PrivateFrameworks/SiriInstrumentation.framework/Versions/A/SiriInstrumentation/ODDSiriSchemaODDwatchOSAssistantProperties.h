@class NSData;

@interface ODDSiriSchemaODDwatchOSAssistantProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isRaiseToSpeakEnabled : 1; } _has;
}

@property (nonatomic) BOOL isRaiseToSpeakEnabled;
@property (nonatomic) BOOL hasIsRaiseToSpeakEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsRaiseToSpeakEnabled;
- (id)suppressMessageUnderConditions;

@end
