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

- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)keysMonitoredForUpdates;
- (void)setStopsOnLock:(BOOL)a0;
- (void)resetTimers;
- (void)reset;
- (void)logMessage:(id)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (double)relativeVolume;
- (void)setTimerOption:(unsigned long long)a0;
- (void)setForceMixingBehavior:(BOOL)a0;
- (void)setComfortSoundsEnabled:(BOOL)a0;
- (unsigned long long)tinnitusFilterMode;
- (BOOL)stopsOnLock;
- (BOOL)tinnitusFilterEnabled;
- (void)setLastEnablementTimestamp:(double)a0;
- (void)setTimerDurationInSeconds:(double)a0;
- (void)setTinnitusBalance:(double)a0;
- (BOOL)mixesWithMedia;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (void)setTimerEnabled:(BOOL)a0;
- (void)setMediaVolume:(double)a0;
- (void)setActiveTimerEndTimeStamp:(double)a0;
- (unsigned long long)timerOption;
- (BOOL)shouldStoreLocally;
- (double)timerEndInterval;
- (double)timerDurationInSeconds;
- (BOOL)timerEnabled;
- (double)mediaVolume;
- (double)tinnitusBalance;
- (BOOL)timerOnlyOnFirstSession;
- (id)keysToSync;
- (BOOL)forceMixingBehavior;
- (double)lastEnablementTimestamp;
- (void)setTinnitusFilterMode:(unsigned long long)a0;
- (void)setTimerInHoursAndMinutes:(long long)a0 minutes:(long long)a1;
- (BOOL)comfortSoundsEnabled;
- (BOOL)comfortSoundsAvailable;
- (double)activeTimerEndTimeStamp;
- (void)setTimerEndInterval:(double)a0;
- (void)setMixesWithMedia:(BOOL)a0;
- (void)setTimerOnlyOnFirstSession:(BOOL)a0;
- (void)setTinnitusFilterEnabled:(BOOL)a0;
- (void)setRelativeVolume:(double)a0;

@end
