@class NSData, INFERENCESchemaINFERENCEContactResolverConfig;

@interface INFERENCESchemaINFERENCEResolverConfig : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEContactResolverConfig *contactConfig;
@property (nonatomic) BOOL hasContactConfig;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichConfigurationtype;

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
- (void)deleteContactConfig;

@end
