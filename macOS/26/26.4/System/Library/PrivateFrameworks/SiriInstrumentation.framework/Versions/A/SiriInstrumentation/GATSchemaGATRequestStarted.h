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
- (void)deleteAppIntentName;
- (void)deleteClientTraceId;
- (void)deleteIsConfirmationPromptSettingEnabled;

@end
