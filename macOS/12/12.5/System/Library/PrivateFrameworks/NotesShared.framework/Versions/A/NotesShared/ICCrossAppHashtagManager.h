@interface ICCrossAppHashtagManager : NSObject

+ (id)bundleIDsForHashtagSupportingAppsOtherThanNotes;
+ (void)updateUserDefaultsCacheIfNecessaryWithNewlyFetchedHastags:(id)a0;
+ (id)hashtagDisplayTextsFromOtherApps;
+ (void)prefetchHashtagDisplayTextsFromOtherApps;

@end
