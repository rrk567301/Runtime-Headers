@class NSArray, NSData;

@interface IFTSchemaIFTResponseManifest : SISchemaInstrumentationMessage {
    struct { unsigned char useTemplateAsFallback : 1; } _has;
}

@property (copy, nonatomic) NSArray *parameters;
@property (nonatomic) BOOL useTemplateAsFallback;
@property (nonatomic) BOOL hasUseTemplateAsFallback;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (void)deleteParameters;
- (void)deleteUseTemplateAsFallback;

@end
