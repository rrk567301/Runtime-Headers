@class NSArray, NSData;

@interface IFTSchemaIFTResponseManifest : SISchemaInstrumentationMessage {
    struct { unsigned char useTemplateAsFallback : 1; } _has;
}

@property (copy, nonatomic) NSArray *parameters;
@property (nonatomic) BOOL useTemplateAsFallback;
@property (nonatomic) BOOL hasUseTemplateAsFallback;
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
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (void)deleteParameters;
- (void)deleteUseTemplateAsFallback;

@end
