@class NSString;

@interface BMPortraitEntity : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int category;
@property (readonly, nonatomic) int algorithm;
@property (readonly, nonatomic) double decayRate;
@property (nonatomic) char hasDecayRate;
@property (readonly, nonatomic) double score;
@property (nonatomic) char hasScore;
@property (readonly, nonatomic) NSString *osBuild;
@property (readonly, nonatomic) int assetVersion;
@property (nonatomic) char hasAssetVersion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bestLanguage;
@property (readonly, nonatomic) double sentimentScore;
@property (nonatomic) char hasSentimentScore;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithCategory:(int)a0 algorithm:(int)a1 decayRate:(id)a2 score:(id)a3 osBuild:(id)a4 assetVersion:(id)a5 name:(id)a6 bestLanguage:(id)a7 sentimentScore:(id)a8;

@end
