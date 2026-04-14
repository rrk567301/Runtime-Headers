@class NSData, SISchemaUUID;

@interface GATSchemaGATRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char appIntentName : 1; unsigned char isConfirmationPromptSettingEnabled : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *clientTraceId;
@property (nonatomic) BOOL hasClientTraceId;
@property (nonatomic) int appIntentName;
@property (nonatomic) BOOL hasAppIntentName;
@property (nonatomic) BOOL isConfirmationPromptSettingEnabled;
@property (nonatomic) BOOL hasIsConfirmationPromptSettingEnabled;
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
- (void)deleteAppIntentName;
- (void)deleteClientTraceId;
- (void)deleteIsConfirmationPromptSettingEnabled;

@end
