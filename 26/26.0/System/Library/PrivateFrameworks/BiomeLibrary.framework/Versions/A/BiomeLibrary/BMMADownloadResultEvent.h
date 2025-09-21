@class NSString, BMMAAssetMetadata;

@interface BMMADownloadResultEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMMAAssetMetadata *assetMetaData;
@property (readonly, nonatomic) BOOL cellularAccessRequest;
@property (nonatomic) BOOL hasCellularAccessRequest;
@property (readonly, nonatomic) BOOL cellularAccessResponse;
@property (nonatomic) BOOL hasCellularAccessResponse;
@property (readonly, nonatomic) BOOL constrainedNetworkAccessRequest;
@property (nonatomic) BOOL hasConstrainedNetworkAccessRequest;
@property (readonly, nonatomic) BOOL constrainedNetworkAccessResponse;
@property (nonatomic) BOOL hasConstrainedNetworkAccessResponse;
@property (readonly, nonatomic) BOOL expensiveNetworkAccessRequest;
@property (nonatomic) BOOL hasExpensiveNetworkAccessRequest;
@property (readonly, nonatomic) BOOL expensiveNetworkAccessResponse;
@property (nonatomic) BOOL hasExpensiveNetworkAccessResponse;
@property (readonly, nonatomic) BOOL isMAAutoAsset;
@property (nonatomic) BOOL hasIsMAAutoAsset;
@property (readonly, nonatomic) BOOL isDiscretionary;
@property (nonatomic) BOOL hasIsDiscretionary;
@property (readonly, nonatomic) BOOL IsUserPriority;
@property (nonatomic) BOOL hasIsUserPriority;
@property (readonly, nonatomic) NSString *result;
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
- (id)initWithAssetMetaData:(id)a0 cellularAccessRequest:(id)a1 cellularAccessResponse:(id)a2 constrainedNetworkAccessRequest:(id)a3 constrainedNetworkAccessResponse:(id)a4 expensiveNetworkAccessRequest:(id)a5 expensiveNetworkAccessResponse:(id)a6 isMAAutoAsset:(id)a7 isDiscretionary:(id)a8 IsUserPriority:(id)a9 result:(id)a10;

@end
