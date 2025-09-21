@class NSArray, NSData;

@interface NLRouterSchemaNLRouterPromptGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char totalSizeInTokens : 1; unsigned char estimatedSizeInTokens : 1; } _has;
}

@property (copy, nonatomic) NSArray *components;
@property (copy, nonatomic) NSArray *droppedComponents;
@property (nonatomic) unsigned int totalSizeInTokens;
@property (nonatomic) BOOL hasTotalSizeInTokens;
@property (nonatomic) unsigned int estimatedSizeInTokens;
@property (nonatomic) BOOL hasEstimatedSizeInTokens;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (unsigned long long)componentsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)addComponents:(id)a0;
- (void)clearComponents;
- (void).cxx_destruct;
- (id)componentsAtIndex:(unsigned long long)a0;
- (void)addDroppedComponents:(id)a0;
- (void)clearDroppedComponents;
- (void)deleteComponents;
- (void)deleteDroppedComponents;
- (void)deleteEstimatedSizeInTokens;
- (void)deleteTotalSizeInTokens;
- (id)droppedComponentsAtIndex:(unsigned long long)a0;
- (unsigned long long)droppedComponentsCount;

@end
