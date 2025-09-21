@class NSString, NSArray, NSData;

@interface UAFSchemaUAFAssetSet : SISchemaInstrumentationMessage {
    struct { unsigned char fromPreSoftwareUpdateStaging : 1; unsigned char expensiveCellularDownloadRequested : 1; } _has;
}

@property (copy, nonatomic) NSString *assetSetName;
@property (nonatomic) char hasAssetSetName;
@property (copy, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSString *assetType;
@property (nonatomic) char hasAssetType;
@property (copy, nonatomic) NSString *assetSetId;
@property (nonatomic) char hasAssetSetId;
@property (copy, nonatomic) NSString *audienceId;
@property (nonatomic) char hasAudienceId;
@property (copy, nonatomic) NSArray *mobileAssetDownloadErrorCodeFrequencys;
@property (nonatomic) char fromPreSoftwareUpdateStaging;
@property (nonatomic) char hasFromPreSoftwareUpdateStaging;
@property (nonatomic) char expensiveCellularDownloadRequested;
@property (nonatomic) char hasExpensiveCellularDownloadRequested;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAssets:(id)a0;
- (unsigned long long)assetsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAssetType;
- (void)addMobileAssetDownloadErrorCodeFrequency:(id)a0;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void)clearAssets;
- (void)clearMobileAssetDownloadErrorCodeFrequency;
- (void)deleteAssetSetId;
- (void)deleteAssetSetName;
- (void)deleteAssets;
- (void)deleteAudienceId;
- (void)deleteExpensiveCellularDownloadRequested;
- (void)deleteFromPreSoftwareUpdateStaging;
- (void)deleteMobileAssetDownloadErrorCodeFrequency;
- (id)mobileAssetDownloadErrorCodeFrequencyAtIndex:(unsigned long long)a0;
- (unsigned long long)mobileAssetDownloadErrorCodeFrequencyCount;
- (id)suppressMessageUnderConditions;

@end
