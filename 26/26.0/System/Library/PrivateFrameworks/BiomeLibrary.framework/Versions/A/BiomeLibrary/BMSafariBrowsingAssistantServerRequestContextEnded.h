@class NSString, BMSafariBrowsingAssistantResponseData;

@interface BMSafariBrowsingAssistantServerRequestContextEnded : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *serverReleaseVersion;
@property (readonly, nonatomic) BMSafariBrowsingAssistantResponseData *responseData;
@property (readonly, nonatomic) BOOL isFreshTier;
@property (nonatomic) BOOL hasIsFreshTier;
@property (readonly, nonatomic) BOOL isBatchTier;
@property (nonatomic) BOOL hasIsBatchTier;
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
- (id)initWithServerReleaseVersion:(id)a0 responseData:(id)a1;
- (id)initWithServerReleaseVersion:(id)a0 responseData:(id)a1 isFreshTier:(id)a2 isBatchTier:(id)a3;

@end
