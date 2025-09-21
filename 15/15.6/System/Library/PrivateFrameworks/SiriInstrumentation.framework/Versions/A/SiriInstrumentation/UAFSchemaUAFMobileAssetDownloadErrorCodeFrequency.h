@class NSData;

@interface UAFSchemaUAFMobileAssetDownloadErrorCodeFrequency : SISchemaInstrumentationMessage {
    struct { unsigned char mobileAssetDownloadErrorCode : 1; unsigned char timesOccurred : 1; } _has;
}

@property (nonatomic) unsigned int mobileAssetDownloadErrorCode;
@property (nonatomic) char hasMobileAssetDownloadErrorCode;
@property (nonatomic) unsigned int timesOccurred;
@property (nonatomic) char hasTimesOccurred;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMobileAssetDownloadErrorCode;
- (void)deleteTimesOccurred;
- (id)suppressMessageUnderConditions;

@end
