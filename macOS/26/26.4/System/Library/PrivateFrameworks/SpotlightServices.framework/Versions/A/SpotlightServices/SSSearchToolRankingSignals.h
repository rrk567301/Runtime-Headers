@interface SSSearchToolRankingSignals : NSObject

+ (void)populateFeatureForMeCardEmailInRecipients:(id)a0 queryContext:(id)a1 subject:(id)a2;
+ (void)extractDocTextualFeatureForResult:(id)a0 queryContext:(id)a1 title:(id)a2 subject:(id)a3 displayName:(id)a4 normalizedSearchTermsFromQUSet:(id)a5 normalizedSearchTermsPersonFromQUSet:(id)a6 normalizedPersonFromQUSet:(id)a7 preExtractionBoost:(BOOL)a8 seenMailMessageHeaders:(id)a9 seenEventMailMessageHeaders:(id)a10 walletDetectedEventMapping:(id)a11 isEventSearch:(BOOL)a12;
+ (id)getArrivalLocationStringFromResult:(id)a0;
+ (id)getDepartureLocationStringFromResult:(id)a0;
+ (id)getLocationStringFromResult:(id)a0;
+ (BOOL)isEqualMatchInfoAttribute:(id)a0 targetQUTokenSet:(id)a1;
+ (float)keywordMatchScoreFromMatchInfoAttribute:(id)a0 targetQUTokenSet:(id)a1;
+ (float)matchType2ScoreForContact:(long long)a0 isAlterName:(BOOL)a1 isFirstTokenMatch:(BOOL)a2 isLastTokenMatch:(BOOL)a3 nameLen:(unsigned long long)a4 searchTermLen:(unsigned long long)a5;
+ (long long)matchTypeBetweenArgsAndTitle:(id)a0 titleNamesSet:(id)a1 normalizedArgs:(id)a2 normalizedArgsSet:(id)a3 isFirstTokenMatch:(BOOL *)a4 isLastTokenMatch:(BOOL *)a5;
+ (id)normalizeTextTokens:(id)a0 titleNames:(id)a1 nlTagger:(id)a2 queryContext:(id)a3;
+ (void)populateIdCardSignalsResult:(id)a0 queryContext:(id)a1 normalizedSearchTermsFromQUSet:(id)a2 normalizedPersonFromQUSet:(id)a3;
+ (void)populateMatchTypeBetweenSearchTermsAndTitle:(id)a0 queryContext:(id)a1 title:(id)a2 subject:(id)a3 displayName:(id)a4 normalizedSearchTermsFromQUSet:(id)a5 normalizedSearchTermsPersonFromQUSet:(id)a6 normalizedPersonFromQUSet:(id)a7 isEventSearch:(BOOL)a8;
+ (void)populateMatchTypeBetweenSearchTermsAndTitleForContact:(id)a0 queryContext:(id)a1 normalizedSearchTermsFromQUSet:(id)a2 normalizedPersonFromQUSet:(id)a3 nlTagger:(id)a4 isEventSearch:(BOOL)a5;
+ (void)populateMatchTypeForOneOnOneCalendarSearch:(id)a0 queryContext:(id)a1 title:(id)a2;
+ (void)populatePreextractionSignalsForResult:(id)a0 queryContext:(id)a1;
+ (void)populateSharedLinksSignalsForResult:(id)a0 queryContext:(id)a1;

@end
