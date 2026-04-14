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
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)setLastEnablementTimestamp:(double)a0;
- (double)timerEndInterval;
- (double)lastEnablementTimestamp;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)setTimerInHoursAndMinutes:(long long)a0 minutes:(long long)a1;
- (void)setTinnitusFilterEnabled:(BOOL)a0;
- (void)setComfortSoundsEnabled:(BOOL)a0;
- (BOOL)timerOnlyOnFirstSession;
- (double)relativeVolume;
- (void)setTinnitusFilterMode:(unsigned long long)a0;
- (id)keysMonitoredForUpdates;
- (void)resetTimers;
- (BOOL)comfortSoundsEnabled;
- (unsigned long long)timerOption;
- (double)activeTimerEndTimeStamp;
- (void)setTimerEnabled:(BOOL)a0;
- (BOOL)stopsOnLock;
- (void)setActiveTimerEndTimeStamp:(double)a0;
- (unsigned long long)tinnitusFilterMode;
- (void)setTimerEndInterval:(double)a0;
- (double)timerDurationInSeconds;
- (void)setTimerOption:(unsigned long long)a0;
- (void)setMediaVolume:(double)a0;
- (BOOL)shouldStoreLocally;
- (double)tinnitusBalance;
- (void)setRelativeVolume:(double)a0;
- (void)setTinnitusBalance:(double)a0;
- (id)keysToSync;
- (void)setTimerOnlyOnFirstSession:(BOOL)a0;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (void)reset;
- (BOOL)timerEnabled;
- (BOOL)tinnitusFilterEnabled;
- (void)setStopsOnLock:(BOOL)a0;
- (BOOL)forceMixingBehavior;
- (void)setMixesWithMedia:(BOOL)a0;
- (void)setTimerDurationInSeconds:(double)a0;
- (BOOL)comfortSoundsAvailable;
- (double)mediaVolume;
- (void)setForceMixingBehavior:(BOOL)a0;
- (BOOL)mixesWithMedia;

@end
