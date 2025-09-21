@class NSNumber;

@interface STMutableRestrictions : STRestrictions

@property (nonatomic) BOOL isEnabled;
@property (nonatomic) long long allowInstallingApps;
@property (nonatomic) long long allowDeletingApps;
@property (nonatomic) long long allowInAppPurchases;
@property (nonatomic) long long allowMusicVideos;
@property (nonatomic) long long allowMusicProfiles;
@property (nonatomic) NSNumber *tvShowsRating;
@property (nonatomic) NSNumber *moviesRating;
@property (nonatomic) NSNumber *appsRating;
@property (nonatomic) long long allowExplicitBooks;
@property (nonatomic) long long allowExplicitMediaContent;
@property (nonatomic) unsigned long long webFilterState;
@property (nonatomic) long long webContentFilterState;
@property (nonatomic) long long allowPrivateMessaging;
@property (nonatomic) long long allowAvatarAndNicknameChanges;
@property (nonatomic) long long allowProfilePrivacyChanges;
@property (nonatomic) long long allowWebContentSearchInSiri;
@property (nonatomic) long long allowExplicitLanguageInSiri;
@property (nonatomic) long long allowExternalIntelligenceIntegrations;
@property (nonatomic) long long allowWritingTools;
@property (nonatomic) long long allowImageCreation;

- (void)setIsEnabled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIsEnabled:(BOOL)a0;
- (void)setAllowWebContentSearchInSiri:(long long)a0;
- (void)setAllowExplicitLanguageInSiri:(long long)a0;
- (id)restrictionsImmutableCopy;
- (void)setAllowAvatarAndNicknameChanges:(long long)a0;
- (void)setAllowDeletingApps:(long long)a0;
- (void)setAllowExplicitBooks:(long long)a0;
- (void)setAllowExplicitMediaContent:(long long)a0;
- (void)setAllowExternalIntelligenceIntegrations:(long long)a0;
- (void)setAllowImageCreation:(long long)a0;
- (void)setAllowInAppPurchases:(long long)a0;
- (void)setAllowInstallingApps:(long long)a0;
- (void)setAllowMusicProfiles:(long long)a0;
- (void)setAllowMusicVideos:(long long)a0;
- (void)setAllowPrivateMessaging:(long long)a0;
- (void)setAllowProfilePrivacyChanges:(long long)a0;
- (void)setAllowWritingTools:(long long)a0;
- (void)setAppsRating:(id)a0;
- (void)setMoviesRating:(id)a0;
- (void)setTvShowsRating:(id)a0;
- (void)setWebContentFilterState:(long long)a0;
- (void)setWebFilterState:(unsigned long long)a0;

@end
