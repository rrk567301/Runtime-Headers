@class NSArray, NSData;

@interface IFTSchemaIFTResponseManifest : SISchemaInstrumentationMessage {
    struct { unsigned char useTemplateAsFallback : 1; } _has;
}

@property (copy, nonatomic) NSArray *parameters;
@property (nonatomic) char useTemplateAsFallback;
@property (nonatomic) char hasUseTemplateAsFallback;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteParameters;
- (void)deleteUseTemplateAsFallback;
- (id)suppressMessageUnderConditions;

@end
