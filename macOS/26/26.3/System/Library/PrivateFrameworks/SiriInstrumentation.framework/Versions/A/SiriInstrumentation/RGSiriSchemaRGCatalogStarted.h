@class NSString, NSData;

@interface RGSiriSchemaRGCatalogStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSString *responseCatalogMobileAssetVersion;
@property (nonatomic) BOOL hasResponseCatalogMobileAssetVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (void)deleteExists;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteResponseCatalogMobileAssetVersion;

@end
