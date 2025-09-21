@class NSArray, SFRankingFeedback, NSObject;

@interface NTCatchUpOperationResults : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject *supplementalInterestToken;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) SFRankingFeedback *rankingFeedback;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeedItems:(id)a0 supplementalInterestToken:(id)a1 feedContextByFeedID:(id)a2;
- (id)init;
- (id)initWithHeadlines:(id)a0 rankingFeedback:(id)a1 actionURLsByArticleID:(id)a2;
- (id)copyWithItems:(id)a0;
- (id)resultsByCombiningWithResults:(id)a0;
- (id)initWithItems:(id)a0 rankingFeedback:(id)a1 supplementalInterestToken:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
