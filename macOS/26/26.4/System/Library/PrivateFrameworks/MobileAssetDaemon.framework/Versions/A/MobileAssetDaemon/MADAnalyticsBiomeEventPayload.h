@class NSString, NSArray, MADAnalyticsBiomeDownloadResult;

@interface MADAnalyticsBiomeEventPayload : NSObject

@property (nonatomic) long long biomeType;
@property (nonatomic) long long operation;
@property (retain, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSString *assetSpecifier;
@property (retain, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) NSString *discoveredAtomicInstance;
@property (nonatomic) unsigned long long assetCount;
@property (retain, nonatomic) MADAnalyticsBiomeDownloadResult *downloadResult;
@property (retain, nonatomic) NSArray *triggeredAssetSetIdentifiers;
@property (nonatomic) unsigned long long setScheduledJobsTriggered;
@property (nonatomic) unsigned long long configCount;
@property (nonatomic) unsigned long long requestCount;
@property (retain, nonatomic) NSString *clientDomainName;
@property (nonatomic) unsigned long long pallasCount;
@property (retain, nonatomic) NSString *audience;
@property (retain, nonatomic) NSString *targetOS;
@property (nonatomic) unsigned int requiredAssetsCount;
@property (nonatomic) unsigned int optionalAssetsCount;
@property (nonatomic) BOOL fromCache;

+ (id)biomePayloadAssetJob:(long long)a0 selector:(id)a1 result:(id)a2;
+ (id)biomePayloadAssetUpdate:(long long)a0 selector:(id)a1;
+ (id)biomePayloadAtomicInstance:(long long)a0 assetSetIdentifier:(id)a1 discoveredAtomicInstance:(id)a2 count:(unsigned long long)a3;
+ (id)biomePayloadPSUSDetermine:(long long)a0 assetType:(id)a1 clientDomainName:(id)a2 assetSetIdentifier:(id)a3 audience:(id)a4 targetOS:(id)a5 requiredAssetsCount:(unsigned int)a6 optionalAssetsCount:(unsigned int)a7 fromCache:(BOOL)a8;
+ (id)biomePayloadPromotion:(long long)a0 assetSetIdentifier:(id)a1 selector:(id)a2;
+ (id)biomePayloadScheduler:(long long)a0 triggeredAssetSetIdentifiers:(id)a1 setScheduledJobsTriggered:(long long)a2;
+ (id)biomePayloadSecure:(long long)a0 selector:(id)a1;
+ (id)biomePayloadSetConfiguration:(long long)a0 setConfiguration:(id)a1 pallasCount:(unsigned long long)a2;

- (id)dictRepresentation;
- (void).cxx_destruct;
- (void)writeOutToDisk:(long long)a0 errors:(id)a1;

@end
