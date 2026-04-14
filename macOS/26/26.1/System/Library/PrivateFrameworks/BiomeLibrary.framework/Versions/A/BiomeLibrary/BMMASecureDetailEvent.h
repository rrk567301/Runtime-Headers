@class NSString, BMMAAssetMetadata;

@interface BMMASecureDetailEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMMAAssetMetadata *assetMetaData;
@property (readonly, nonatomic) BOOL clientName;
@property (nonatomic) BOOL hasClientName;
@property (readonly, nonatomic) BOOL fromLocation;
@property (nonatomic) BOOL hasFromLocation;
@property (readonly, nonatomic) NSString *graftingFailureReason;
@property (readonly, nonatomic) BOOL graftingResult;
@property (nonatomic) BOOL hasGraftingResult;
@property (readonly, nonatomic) NSString *mapExclaveFailureReason;
@property (readonly, nonatomic) BOOL mapExclaveFailureResult;
@property (nonatomic) BOOL hasMapExclaveFailureResult;
@property (readonly, nonatomic) NSString *mountingFailureReason;
@property (readonly, nonatomic) BOOL mountingFailureResult;
@property (nonatomic) BOOL hasMountingFailureResult;
@property (readonly, nonatomic) int maSecureOperationType;
@property (readonly, nonatomic) NSString *personalizeFailureReason;
@property (readonly, nonatomic) BOOL personalizeFailureResult;
@property (nonatomic) BOOL hasPersonalizeFailureResult;
@property (readonly, nonatomic) NSString *secureReason;
@property (readonly, nonatomic) NSString *result;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)initWithAssetMetaData:(id)a0 clientName:(id)a1 fromLocation:(id)a2 graftingFailureReason:(id)a3 graftingResult:(id)a4 mapExclaveFailureReason:(id)a5 mapExclaveFailureResult:(id)a6 mountingFailureReason:(id)a7 mountingFailureResult:(id)a8 maSecureOperationType:(int)a9 personalizeFailureReason:(id)a10 personalizeFailureResult:(id)a11 secureReason:(id)a12 result:(id)a13;

@end
