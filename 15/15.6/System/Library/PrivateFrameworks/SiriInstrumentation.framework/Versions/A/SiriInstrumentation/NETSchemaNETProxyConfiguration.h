@class NSData;

@interface NETSchemaNETProxyConfiguration : SISchemaInstrumentationMessage {
    struct { unsigned char isProxyConfigured : 1; unsigned char usingConfiguredProxy : 1; } _has;
}

@property (nonatomic) char isProxyConfigured;
@property (nonatomic) char hasIsProxyConfigured;
@property (nonatomic) char usingConfiguredProxy;
@property (nonatomic) char hasUsingConfiguredProxy;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsProxyConfigured;
- (void)deleteUsingConfiguredProxy;
- (id)suppressMessageUnderConditions;

@end
