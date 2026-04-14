@class NSString, NSArray, NSData;

@interface UAFSchemaUAFAssetSet : SISchemaInstrumentationMessage {
    struct { unsigned char fromPreSoftwareUpdateStaging : 1; unsigned char expensiveCellularDownloadRequested : 1; unsigned char isfromFactory : 1; } _has;
}

@property (copy, nonatomic) NSString *assetSetName;
@property (nonatomic) BOOL hasAssetSetName;
@property (copy, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSString *assetType;
@property (nonatomic) BOOL hasAssetType;
@property (copy, nonatomic) NSString *assetSetId;
@property (nonatomic) BOOL hasAssetSetId;
@property (copy, nonatomic) NSString *audienceId;
@property (nonatomic) BOOL hasAudienceId;
@property (copy, nonatomic) NSArray *mobileAssetDownloadErrorCodeFrequencys;
@property (nonatomic) BOOL fromPreSoftwareUpdateStaging;
@property (nonatomic) BOOL hasFromPreSoftwareUpdateStaging;
@property (nonatomic) BOOL expensiveCellularDownloadRequested;
@property (nonatomic) BOOL hasExpensiveCellularDownloadRequested;
@property (nonatomic) BOOL isfromFactory;
@property (nonatomic) BOOL hasIsfromFactory;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)assetsCount;
- (void)addAssets:(id)a0;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void)clearAssets;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAssetType;
- (void)addMobileAssetDownloadErrorCodeFrequency:(id)a0;
- (void)clearMobileAssetDownloadErrorCodeFrequency;
- (void)deleteAssetSetId;
- (void)deleteAssetSetName;
- (void)deleteAssets;
- (void)deleteAudienceId;
- (void)deleteExpensiveCellularDownloadRequested;
- (void)deleteFromPreSoftwareUpdateStaging;
- (void)deleteIsfromFactory;
- (void)deleteMobileAssetDownloadErrorCodeFrequency;
- (id)mobileAssetDownloadErrorCodeFrequencyAtIndex:(unsigned long long)a0;
- (unsigned long long)mobileAssetDownloadErrorCodeFrequencyCount;

@end
