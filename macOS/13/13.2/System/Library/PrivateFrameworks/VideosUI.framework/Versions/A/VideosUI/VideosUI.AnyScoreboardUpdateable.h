@interface VideosUI.AnyScoreboardUpdateable : NSObject <VUISportsScoreboardManagerDelegate> {
    void /* unknown type, empty encoding */ scoreboard;
    void /* unknown type, empty encoding */ canonicalId;
    void /* unknown type, empty encoding */ leagueId;
    void /* unknown type, empty encoding */ isCanonicalBanner;
    void /* unknown type, empty encoding */ isActive;
}

- (id)init;
- (void).cxx_destruct;
- (id)getJSContextDictionary;
- (void)updateScoreboard:(id)a0;

@end
