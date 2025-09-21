@class NSData;

@interface NLRouterSchemaNLRouterPromptComponent : SISchemaInstrumentationMessage {
    struct { unsigned char componentType : 1; unsigned char sizeInTokens : 1; } _has;
}

@property (nonatomic) int componentType;
@property (nonatomic) char hasComponentType;
@property (nonatomic) unsigned int sizeInTokens;
@property (nonatomic) char hasSizeInTokens;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteComponentType;
- (void)deleteSizeInTokens;
- (id)suppressMessageUnderConditions;

@end
