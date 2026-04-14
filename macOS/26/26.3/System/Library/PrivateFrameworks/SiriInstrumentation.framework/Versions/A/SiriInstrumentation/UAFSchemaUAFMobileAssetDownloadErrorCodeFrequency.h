@class NSData;

@interface UAFSchemaUAFMobileAssetDownloadErrorCodeFrequency : SISchemaInstrumentationMessage {
    struct { unsigned char mobileAssetDownloadErrorCode : 1; unsigned char timesOccurred : 1; } _has;
}

@property (nonatomic) unsigned int mobileAssetDownloadErrorCode;
@property (nonatomic) BOOL hasMobileAssetDownloadErrorCode;
@property (nonatomic) unsigned int timesOccurred;
@property (nonatomic) BOOL hasTimesOccurred;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteMobileAssetDownloadErrorCode;
- (void)deleteTimesOccurred;

@end
