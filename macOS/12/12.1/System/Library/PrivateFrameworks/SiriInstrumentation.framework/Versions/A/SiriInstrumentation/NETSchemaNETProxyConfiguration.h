@class NSData;

@interface NETSchemaNETProxyConfiguration : SISchemaInstrumentationMessage {
    struct { unsigned char isProxyConfigured : 1; unsigned char usingConfiguredProxy : 1; } _has;
}

@property (nonatomic) BOOL isProxyConfigured;
@property (nonatomic) BOOL hasIsProxyConfigured;
@property (nonatomic) BOOL usingConfiguredProxy;
@property (nonatomic) BOOL hasUsingConfiguredProxy;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
