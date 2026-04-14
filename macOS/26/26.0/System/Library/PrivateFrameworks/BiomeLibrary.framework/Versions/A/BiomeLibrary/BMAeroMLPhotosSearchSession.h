@class NSString, NSArray;

@interface BMAeroMLPhotosSearchSession : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *queryRaw;
@property (readonly, nonatomic) NSArray *queryEmbedding;
@property (readonly, nonatomic) NSArray *presentedAssets;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *region;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) unsigned int libraryProcessingProgress;
@property (nonatomic) BOOL hasLibraryProcessingProgress;
@property (readonly, nonatomic) int librarySizeBucket;
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
- (id)initWithQueryRaw:(id)a0 queryEmbedding:(id)a1 presentedAssets:(id)a2 language:(id)a3 region:(id)a4 version:(id)a5 libraryProcessingProgress:(id)a6 librarySizeBucket:(int)a7;
- (id)_presentedAssetsJSONArray;
- (id)_queryEmbeddingJSONArray;
- (id)initWithQueryRaw:(id)a0 queryEmbedding:(id)a1 presentedAssets:(id)a2;

@end
