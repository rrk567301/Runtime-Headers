@class NSData;

@interface SADSchemaSADImmediateDownloadTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char locale : 1; unsigned char existingAssets : 1; unsigned char retryCount : 1; } _has;
}

@property (nonatomic) int locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL existingAssets;
@property (nonatomic) BOOL hasExistingAssets;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) BOOL hasRetryCount;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
