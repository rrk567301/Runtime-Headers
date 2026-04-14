@interface WBSResultRankerHelpers : NSObject

+ (BOOL)hostAreEqual:(id)a0 forSecondURLString:(id)a1;
+ (id)simplifiedURL:(id)a0;
+ (long long)numberOfWords:(id)a0;
+ (double)topSitesScoreAndVisitCountScoreFactor:(id)a0 forTopSiteScore:(float)a1 forVisitCountScore:(long long)a2;
+ (BOOL)allowMatch:(id)a0 forMatch:(id)a1 forQueryString:(id)a2;

@end
