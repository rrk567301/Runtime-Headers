@class SISchemaUEIHostingPlatformViewDisappearStarted, SISchemaUEIHostingPlatformViewDisappearEnded, NSData;

@interface SISchemaUEIHostingPlatformViewDisappearContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUEIHostingPlatformViewDisappearStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) SISchemaUEIHostingPlatformViewDisappearEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteStartedOrChanged;
- (void)deleteEnded;

@end
