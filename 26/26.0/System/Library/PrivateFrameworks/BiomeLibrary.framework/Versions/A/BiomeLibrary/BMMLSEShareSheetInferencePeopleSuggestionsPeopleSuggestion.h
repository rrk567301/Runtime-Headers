@class NSString, BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestionModelIdentifier;

@interface BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestion : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestionModelIdentifier *modelIdentifier;
@property (readonly, nonatomic) NSString *transportBundleId;
@property (readonly, nonatomic) unsigned int rank;
@property (nonatomic) BOOL hasRank;
@property (readonly, nonatomic) double score;
@property (nonatomic) BOOL hasScore;
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
- (id)initWithIdentifier:(id)a0 model:(id)a1 modelIdentifier:(id)a2 transportBundleId:(id)a3 rank:(id)a4 score:(id)a5;

@end
