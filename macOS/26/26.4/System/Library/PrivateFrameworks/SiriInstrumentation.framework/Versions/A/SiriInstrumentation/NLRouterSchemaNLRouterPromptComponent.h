@class NSData;

@interface NLRouterSchemaNLRouterPromptComponent : SISchemaInstrumentationMessage {
    struct { unsigned char componentType : 1; unsigned char sizeInTokens : 1; } _has;
}

@property (nonatomic) int componentType;
@property (nonatomic) BOOL hasComponentType;
@property (nonatomic) unsigned int sizeInTokens;
@property (nonatomic) BOOL hasSizeInTokens;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteComponentType;
- (void)deleteSizeInTokens;

@end
