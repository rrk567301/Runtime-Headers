@class NSString, PSIGroup, PLSearchSuggestionComponent;

@interface PSIRankedGroupV2 : NSObject

@property (nonatomic) float rankingScore;
@property (nonatomic) float graphRankingScore;
@property (readonly, nonatomic) PSIGroup *group;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) BOOL isMePerson;
@property (readonly, nonatomic) PLSearchSuggestionComponent *suggestionComponent;
@property (readonly, nonatomic) long long assetCount;
@property (readonly, nonatomic) unsigned long long searchIndexingCategory;

- (id)jsonDictionary;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 displayString:(id)a1 isMePerson:(BOOL)a2;

@end
