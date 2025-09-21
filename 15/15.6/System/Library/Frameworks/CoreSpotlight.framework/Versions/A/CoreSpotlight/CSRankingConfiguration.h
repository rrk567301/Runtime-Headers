@class NSArray, NSString, NSDictionary;

@interface CSRankingConfiguration : NSObject

@property (readonly, nonatomic) NSArray *bundleIDs;
@property (readonly, nonatomic) NSString *nlpContextID;
@property (readonly, nonatomic) char enablePommesRanking;
@property (readonly, nonatomic) char enablePommesSuggestions;
@property (readonly, nonatomic) char enableSemanticSearch;
@property (readonly, nonatomic) char enableExtendedEmbeddingTimeout;
@property (readonly, nonatomic) char enableUniversalSuggestions;
@property (readonly, nonatomic) char enableSuggestions;
@property (readonly, nonatomic) char isCJK;
@property (readonly, nonatomic) char isMail;
@property (readonly, nonatomic) char isNotes;
@property (readonly, nonatomic) char isPhotos;
@property (readonly, nonatomic) char isPommesZKW;
@property (readonly, nonatomic) char isPommesCtl;
@property (readonly, nonatomic) char isSpotlight;
@property (readonly, nonatomic) char isSettings;
@property (readonly, nonatomic) char isSafari;
@property (readonly, nonatomic) char isSearch;
@property (readonly, nonatomic) long long maxSuggestionCount;
@property (readonly, nonatomic) NSDictionary *suggestionRankingWeights;

- (void).cxx_destruct;
- (id)initWithQueryContext:(id)a0;

@end
