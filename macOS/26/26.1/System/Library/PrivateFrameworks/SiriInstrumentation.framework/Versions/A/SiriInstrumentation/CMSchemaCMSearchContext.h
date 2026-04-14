@class CMSchemaCMSearchEnded, CMSchemaCMSearchFailed, NSData, CMSchemaCMSearchStarted;

@interface CMSchemaCMSearchContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) CMSchemaCMSearchStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) CMSchemaCMSearchEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) CMSchemaCMSearchFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
