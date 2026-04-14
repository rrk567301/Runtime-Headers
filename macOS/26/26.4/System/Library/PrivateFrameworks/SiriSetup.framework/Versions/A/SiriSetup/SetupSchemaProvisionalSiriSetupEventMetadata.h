@class NSData, SISchemaUUID;

@interface SetupSchemaProvisionalSiriSetupEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *setupId;
@property (nonatomic) BOOL hasSetupId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSetupId;

@end
