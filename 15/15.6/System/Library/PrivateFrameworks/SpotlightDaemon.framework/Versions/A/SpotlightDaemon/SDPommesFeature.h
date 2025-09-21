@interface SDPommesFeature : NSObject

+ (char)isSafariBundle:(id)a0;
+ (char)isCalendarBundle:(id)a0;
+ (char)isMailBundle:(id)a0;
+ (char)isMessagesBundle:(id)a0;
+ (char)isSettingsBundle:(id)a0;
+ (char)usingPommesRankingForClientBundle:(id)a0;
+ (char)isPhotosBundle:(id)a0;
+ (char)isEventsBundle:(id)a0;
+ (id)allBundleIDsUsingPommesRanking;
+ (id)allBundleIDsUsingPommesRankingSearchTool;
+ (id)baseBundleIDs;
+ (char)isRemindersBundle:(id)a0;
+ (char)isSearchCLIBundle:(id)a0;
+ (char)isSearchToolClientBundle:(id)a0;
+ (char)isSpotlightUIClientBundle:(id)a0;
+ (char)purePommesL2RankingAllowedWithSectionBundle:(id)a0 clientBundle:(id)a1;
+ (char)usingRewritesForContextBundleIDs:(id)a0 clientBundleID:(id)a1 userQuery:(id)a2 indexSupportsRewrites:(char)a3 isCounting:(char)a4 embeddingsEnabled:(char)a5;

@end
