@class NSData;

@interface NLRouterSchemaNLRouterPromptComponent : SISchemaInstrumentationMessage {
    struct { unsigned char componentType : 1; unsigned char sizeInTokens : 1; } _has;
}

@property (nonatomic) int componentType;
@property (nonatomic) BOOL hasComponentType;
@property (nonatomic) unsigned int sizeInTokens;
@property (nonatomic) BOOL hasSizeInTokens;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteComponentType;
- (void)deleteSizeInTokens;

@end
