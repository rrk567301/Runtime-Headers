@class PSIRankedGroupV2, PLSearchSuggestionTemplate;

@interface PLSearchSuggestionCandidate : NSObject

@property (retain, nonatomic) struct __CFArray { } *assetIdsForDateFilter;
@property (nonatomic) unsigned long long intersectionCount;
@property (nonatomic) unsigned long long minAssetResultCountPerSuggestion;
@property (nonatomic) float rankingScore;
@property (readonly, nonatomic) PLSearchSuggestionTemplate *suggestionTemplate;
@property (readonly, nonatomic) PSIRankedGroupV2 *firstRankedGroup;
@property (readonly, nonatomic) PSIRankedGroupV2 *secondRankedGroup;
@property (nonatomic) double dateLastUsed;

+ (id)updateCandidates:(id)a0 withTimestampsFromPreviouslyStoredCandidates:(id)a1;

- (id)jsonDictionary;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasDateFilter;
- (BOOL)hasFirstCategory;
- (BOOL)hasSecondCategory;
- (id)initWithSearchSuggestionTemplate:(id)a0 firstGroup:(id)a1 secondGroup:(id)a2 assetIdsForDateFilter:(struct __CFArray { } *)a3 minAssetResultCountPerSuggestion:(unsigned long long)a4;
- (id)populatedTemplateQueryString;
- (id)populatedTemplateQueryStringInLocalization:(id)a0;

@end
