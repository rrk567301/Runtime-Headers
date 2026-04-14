@class HUComfortSoundsFilterPoint;
@protocol HUComfortSoundProtocol;

@interface HUComfortSoundsSettings : HCSettings

@property (nonatomic) BOOL comfortSoundsEnabled;
@property (nonatomic) BOOL mixesWithMedia;
@property (nonatomic) BOOL stopsOnLock;
@property (retain, nonatomic) id<HUComfortSoundProtocol> selectedComfortSound;
@property (nonatomic) double relativeVolume;
@property (nonatomic) double mediaVolume;
@property (nonatomic) double lastEnablementTimestamp;
@property (nonatomic) BOOL forceMixingBehavior;
@property (nonatomic) BOOL timerEnabled;
@property (nonatomic) BOOL timerOnlyOnFirstSession;
@property (nonatomic) unsigned long long timerOption;
@property (nonatomic) double timerEndInterval;
@property (nonatomic) double timerDurationInSeconds;
@property (nonatomic) double activeTimerEndTimeStamp;
@property (nonatomic) BOOL tinnitusFilterEnabled;
@property (nonatomic) unsigned long long tinnitusFilterMode;
@property (retain, nonatomic) HUComfortSoundsFilterPoint *tinnitusFilterPoint;
@property (nonatomic) double tinnitusBalance;

+ (id)sharedInstance;

- (void)logMessage:(id)a0;
- (void)setTimerOption:(unsigned long long)a0;
- (BOOL)timerOnlyOnFirstSession;
- (BOOL)tinnitusFilterEnabled;
- (void)setMixesWithMedia:(BOOL)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)setTinnitusFilterMode:(unsigned long long)a0;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)setTimerInHoursAndMinutes:(long long)a0 minutes:(long long)a1;
- (BOOL)comfortSoundsEnabled;
- (BOOL)forceMixingBehavior;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (void)setMediaVolume:(double)a0;
- (void)setForceMixingBehavior:(BOOL)a0;
- (void)setTimerDurationInSeconds:(double)a0;
- (BOOL)stopsOnLock;
- (double)relativeVolume;
- (BOOL)timerEnabled;
- (BOOL)mixesWithMedia;
- (double)timerEndInterval;
- (void)resetTimers;
- (id)keysMonitoredForUpdates;
- (double)mediaVolume;
- (double)timerDurationInSeconds;
- (void)setStopsOnLock:(BOOL)a0;
- (void)setLastEnablementTimestamp:(double)a0;
- (unsigned long long)tinnitusFilterMode;
- (unsigned long long)timerOption;
- (double)tinnitusBalance;
- (BOOL)comfortSoundsAvailable;
- (void)setTimerEndInterval:(double)a0;
- (void)reset;
- (id)keysToSync;
- (void)setTimerOnlyOnFirstSession:(BOOL)a0;
- (void)setTinnitusBalance:(double)a0;
- (void)setRelativeVolume:(double)a0;
- (void)setComfortSoundsEnabled:(BOOL)a0;
- (double)activeTimerEndTimeStamp;
- (double)lastEnablementTimestamp;
- (BOOL)shouldStoreLocally;
- (void)setTimerEnabled:(BOOL)a0;
- (void)setActiveTimerEndTimeStamp:(double)a0;
- (void)setTinnitusFilterEnabled:(BOOL)a0;

@end
