@class NSData;

@interface GATSchemaGATModelAgentCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char requestedAgent : 1; unsigned char settingsAgent : 1; } _has;
}

@property (nonatomic) int requestedAgent;
@property (nonatomic) BOOL hasRequestedAgent;
@property (nonatomic) int settingsAgent;
@property (nonatomic) BOOL hasSettingsAgent;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestedAgent;
- (void)deleteSettingsAgent;

@end
