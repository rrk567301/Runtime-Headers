@interface VideosUI.AnyScoreboardManagerDelegate : NSObject <VUISportsScoreboardManagerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ leagueId;
    void /* unknown type, empty encoding */ isCanonicalBanner;
}

@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)getJSContextDictionary;
- (void)updateScoreboard:(id)a0;

@end
