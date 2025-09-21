@class NSData, INFERENCESchemaINFERENCEContactResolverConfig;

@interface INFERENCESchemaINFERENCEResolverConfig : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEContactResolverConfig *contactConfig;
@property (nonatomic) char hasContactConfig;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichConfigurationtype;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteContactConfig;
- (id)suppressMessageUnderConditions;

@end
