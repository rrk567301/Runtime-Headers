@class NSArray, NSString, SSMixedRankingConfig;

@interface SSMixedRankingInput : NSObject

@property (nonatomic) unsigned long long queryId;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *serverSuggestions;
@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) SSMixedRankingConfig *config;

- (id)description;
- (void).cxx_destruct;
- (id)extractSuggestionsFromSections;
- (id)initWithDictionary:(id)a0 queryId:(unsigned long long)a1;

@end
