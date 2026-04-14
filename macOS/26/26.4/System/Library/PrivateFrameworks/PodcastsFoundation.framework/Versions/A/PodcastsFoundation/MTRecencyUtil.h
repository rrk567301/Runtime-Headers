@interface MTRecencyUtil : NSObject

+ (double)_lastDatePlayedIfNotFutureDate:(double)a0 podcast:(id)a1;
+ (id)_nextEpisodeForUnplayedPodcast:(id)a0 serial:(BOOL)a1 filter:(id)a2 ctx:(id)a3;
+ (id)_upNextForPodcast:(id)a0 serial:(BOOL)a1 excludeExplicit:(long long)a2 ctx:(id)a3;
+ (id)_upNextResultForUnfollowedPodcast:(id)a0 filter:(id)a1 ctx:(id)a2;
+ (id)_upNextResultForUnplayedFollowedPodcast:(id)a0 nextEpisodeForUnplayedShow:(id)a1 newestEpisodeWithShowBump:(id)a2 mostRecentlyPlayed:(id)a3 filter:(id)a4 serial:(BOOL)a5 ctx:(id)a6;
+ (id)caughtUpNextEpisodeForPodcast:(id)a0 nextEpisodeForUnplayedShow:(id)a1 mostRecentlyPlayedLastDatePlayed:(double)a2 serial:(BOOL)a3 filter:(id)a4;
+ (id)episodesForListenNowWithContext:(id)a0 limit:(long long)a1;
+ (id)mostRecentlySavedUnplayedEpisodeForPodcast:(id)a0 filter:(id)a1 ctx:(id)a2;
+ (id)nextEpisodeForPodcast:(id)a0 mostRecentlyPlayed:(id)a1 caughtUpNextEpisode:(id)a2 serial:(BOOL)a3 filter:(id)a4;
+ (void)unsafeUpdateRelatedFieldsIfUpNextChangedForPodcast:(id)a0 upNextResult:(id)a1 ctx:(id)a2;
+ (id)upNextForPodcastUuid:(id)a0 ctx:(id)a1;
+ (id)upNextForPodcastUuid:(id)a0 excludeExplicit:(long long)a1 ctx:(id)a2;

@end
