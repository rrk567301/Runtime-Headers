@class NSArray, NSString;

@interface BMResultsRanked : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isSemanticSearchEligible;
@property (nonatomic) BOOL hasIsSemanticSearchEligible;
@property (readonly, nonatomic) BOOL isSemanticSearchTriggered;
@property (nonatomic) BOOL hasIsSemanticSearchTriggered;
@property (readonly, nonatomic) long long queryAnalysisTiming;
@property (nonatomic) BOOL hasQueryAnalysisTiming;
@property (readonly, nonatomic) long long retrievalTiming;
@property (nonatomic) BOOL hasRetrievalTiming;
@property (readonly, nonatomic) long long rankingTiming;
@property (nonatomic) BOOL hasRankingTiming;
@property (readonly, nonatomic) NSArray *resultComponent;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)initWithIsSemanticSearchEligible:(id)a0 isSemanticSearchTriggered:(id)a1 queryAnalysisTiming:(id)a2 retrievalTiming:(id)a3 rankingTiming:(id)a4 resultComponent:(id)a5;
- (id)_resultComponentJSONArray;

@end
