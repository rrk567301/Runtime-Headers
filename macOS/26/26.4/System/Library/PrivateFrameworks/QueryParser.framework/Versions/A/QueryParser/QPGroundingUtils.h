@interface QPGroundingUtils : NSObject

+ (BOOL)array:(id)a0 contains:(id)a1;
+ (id)filterNames:(id)a0;
+ (id)filterRankerItems:(id)a0 rawTokens:(id)a1 maxCount:(unsigned long long)a2;
+ (BOOL)isMeAlias:(id)a0 rawTokens:(id)a1;
+ (BOOL)isPersonLabel:(id)a0;
+ (BOOL)isSelfToken:(id)a0;
+ (void)logGroundedPersons:(id)a0 token:(id)a1 rawTokenizedText:(id)a2 logPrefix:(id)a3;
+ (BOOL)matchPerson:(id)a0 withText:(id)a1;
+ (BOOL)matchRankerItem:(id)a0 text:(id)a1 withRawTokenizedText:(id)a2 isSpaceDelimited:(BOOL)a3;
+ (void)matchRankerItems:(id)a0 rankerItemIDCache:(id)a1 token:(id)a2 text:(id)a3 rawTokens:(id)a4 isSpaceDelimited:(BOOL)a5 matchedRankerItems:(id)a6 nonMatchingRankerItems:(id)a7;
+ (void)matchRankerItems:(id)a0 token:(id)a1 text:(id)a2 rawTokens:(id)a3 isSpaceDelimited:(BOOL)a4 view:(id)a5 personCache:(id)a6 matchedRankerItems:(id)a7;
+ (BOOL)shouldUseNamesAndEmailsForNonRelationsForIsSpaceDelimited:(BOOL)a0;

@end
