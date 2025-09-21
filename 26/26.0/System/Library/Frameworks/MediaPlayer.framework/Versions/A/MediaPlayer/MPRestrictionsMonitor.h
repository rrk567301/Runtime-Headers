@interface MPRestrictionsMonitor : NSObject {
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ _configurationProfileNotification;
    void /* unknown type, empty encoding */ _iTunesNotification;
    void /* unknown type, empty encoding */ _demoModeNotification;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ demoModeDefaults;
}

@property (class, nonatomic, readonly) MPRestrictionsMonitor *sharedRestrictionsMonitor;

@property (nonatomic, readonly) BOOL allowsDeletion;
@property (nonatomic, readonly) BOOL allowsMusicSubscription;
@property (nonatomic, readonly) BOOL allowsExplicitContent;
@property (nonatomic, readonly) BOOL allowsMusicVideos;
@property (nonatomic, readonly) long long maximumTVShowRating;
@property (nonatomic, readonly) long long maximumMovieRating;
@property (nonatomic) long long maximumTVShowRatingForAgeGate;
@property (nonatomic) long long maximumMovieRatingForAgeGate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateSettingsWithPostNotifications:(BOOL)a0;

@end
