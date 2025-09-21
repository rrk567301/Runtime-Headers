@class NSData;

@interface SADSchemaSADImmediateDownloadTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char locale : 1; unsigned char existingAssets : 1; unsigned char retryCount : 1; } _has;
}

@property (nonatomic) int locale;
@property (nonatomic) char hasLocale;
@property (nonatomic) char existingAssets;
@property (nonatomic) char hasExistingAssets;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) char hasRetryCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExistingAssets;
- (void)deleteLocale;
- (void)deleteRetryCount;
- (id)suppressMessageUnderConditions;

@end
