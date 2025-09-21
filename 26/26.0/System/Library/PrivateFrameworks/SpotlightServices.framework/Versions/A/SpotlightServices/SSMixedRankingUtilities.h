@interface SSMixedRankingUtilities : NSObject

+ (BOOL)bundleIdIsPhotos:(id)a0;
+ (BOOL)disallowServerBlendingWithLocalSection:(id)a0 config:(id)a1;
+ (void)inputSectionsAndRankingToFile:(id)a0 rankedSections:(id)a1 queryString:(id)a2 config:(id)a3;
+ (BOOL)isMenuItemResult:(id)a0;
+ (BOOL)isPhotosGroupName:(id)a0;
+ (BOOL)isResultServerInstantAnswerForTopHit:(id)a0;
+ (BOOL)isStrongTextMatch:(id)a0;
+ (BOOL)isSuggestedActionResult:(id)a0;
+ (BOOL)isWindowTabResult:(id)a0;
+ (BOOL)sectionIsPhotos:(id)a0;
+ (BOOL)sectionIsServer:(id)a0;
+ (BOOL)sectionIsServerCarrousel:(id)a0;
+ (BOOL)sectionIsSyndicatedLinks:(id)a0;
+ (BOOL)sectionIsTipsOrHelp:(id)a0;
+ (long long)_getServerResultRankFromDict:(id)a0;
+ (long long)_getServerSectionRankFromDict:(id)a0;
+ (id)collectRanking:(id)a0 limit:(long long)a1 config:(id)a2;
+ (id)configToDict:(id)a0;
+ (id)dictFromJSON:(id)a0;
+ (id)getServerCompletion:(id)a0;
+ (void)initBundleIDForRankingItem:(id)a0 appDetails:(id)a1;
+ (BOOL)isExactTextMatch:(id)a0;
+ (BOOL)isUserTypedURLResult:(id)a0;
+ (id)jsonStringForResults:(id)a0 resultRanks:(id)a1 serverRanks:(id)a2 queryString:(id)a3 config:(id)a4;
+ (id)loadJSONDataFromFile:(id)a0;
+ (id)parseConfig:(id)a0;
+ (id)parseDate:(id)a0;
+ (void)parseReferenceDateForConfig:(id)a0 config:(id)a1;
+ (void)parseResultAttributesFromDict:(id)a0 result:(id)a1;
+ (id)parseResultFromDict:(id)a0;
+ (void)parseResultInputsFromDict:(id)a0 result:(id)a1;
+ (id)parseSectionsFromDict:(id)a0;
+ (id)redactText:(id)a0 unredactedWords:(id)a1 unredactedPositions:(id)a2 config:(id)a3;
+ (id)resultAttributesToDict:(id)a0 redact:(BOOL)a1 unredactedWords:(id)a2 config:(id)a3;
+ (id)resultInputsToDict:(id)a0 redact:(BOOL)a1 unredactedWords:(id)a2 config:(id)a3 serverRank:(id)a4;
+ (id)resultOutputsToDict:(id)a0 rank:(unsigned long long)a1 redactedDisplayName:(id)a2;
+ (id)resultToDict:(id)a0 redact:(BOOL)a1 unredactedWords:(id)a2 config:(id)a3 serverRank:(id)a4;
+ (void)writeJSONToFile:(id)a0 string:(id)a1 log:(BOOL)a2;

@end
