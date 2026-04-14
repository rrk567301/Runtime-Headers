@class NSData, SISchemaUUID;

@interface SetupSchemaProvisionalSiriSetupEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *setupId;
@property (nonatomic) BOOL hasSetupId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteSetupId;

@end
