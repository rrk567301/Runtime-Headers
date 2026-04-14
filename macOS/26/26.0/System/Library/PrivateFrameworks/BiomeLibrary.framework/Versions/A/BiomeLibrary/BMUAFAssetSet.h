@class NSString, NSArray;

@interface BMUAFAssetSet : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *assetSetName;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *assetSetId;
@property (readonly, nonatomic) NSString *audienceId;
@property (readonly, nonatomic) NSArray *mobileAssetDownloadErrorCodeFrequency;
@property (readonly, nonatomic) BOOL fromPreSoftwareUpdateStaging;
@property (nonatomic) BOOL hasFromPreSoftwareUpdateStaging;
@property (readonly, nonatomic) BOOL expensiveCellularDownloadRequested;
@property (nonatomic) BOOL hasExpensiveCellularDownloadRequested;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_assetsJSONArray;
- (id)_mobileAssetDownloadErrorCodeFrequencyJSONArray;
- (id)initWithAssetSetName:(id)a0 assets:(id)a1 assetType:(id)a2 assetSetId:(id)a3 audienceId:(id)a4 mobileAssetDownloadErrorCodeFrequency:(id)a5 fromPreSoftwareUpdateStaging:(id)a6 expensiveCellularDownloadRequested:(id)a7;

@end
