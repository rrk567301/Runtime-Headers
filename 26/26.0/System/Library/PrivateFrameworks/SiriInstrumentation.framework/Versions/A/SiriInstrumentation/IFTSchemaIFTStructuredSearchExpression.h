@class NSArray, NSData, IFTSchemaIFTTypeInstance;

@interface IFTSchemaIFTStructuredSearchExpression : SISchemaInstrumentationMessage {
    struct { unsigned char isExpanded : 1; } _has;
}

@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL hasIsExpanded;
@property (copy, nonatomic) NSArray *properties;
@property (retain, nonatomic) IFTSchemaIFTTypeInstance *returnType;
@property (nonatomic) BOOL hasReturnType;
@property (copy, nonatomic) NSArray *parameters;
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
- (void)clearProperties;
- (unsigned long long)propertiesCount;
- (void)addProperties:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (void)deleteIsExpanded;
- (void)deleteParameters;
- (void)deleteProperties;
- (void)deleteReturnType;

@end
