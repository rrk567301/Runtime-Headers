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

- (void)resetTimers;
- (id)keysToSync;
- (unsigned long long)timerOption;
- (void)setRelativeVolume:(double)a0;
- (double)timerDurationInSeconds;
- (void)setMixesWithMedia:(BOOL)a0;
- (BOOL)timerOnlyOnFirstSession;
- (void)setStopsOnLock:(BOOL)a0;
- (void)setTinnitusFilterEnabled:(BOOL)a0;
- (void)setLastEnablementTimestamp:(double)a0;
- (void)setTimerEnabled:(BOOL)a0;
- (double)timerEndInterval;
- (double)activeTimerEndTimeStamp;
- (void)logMessage:(id)a0;
- (double)lastEnablementTimestamp;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)preferenceKeyForSelector:(SEL)a0;
- (BOOL)stopsOnLock;
- (void)setTimerOnlyOnFirstSession:(BOOL)a0;
- (BOOL)mixesWithMedia;
- (void)reset;
- (BOOL)timerEnabled;
- (BOOL)shouldStoreLocally;
- (void)setTimerEndInterval:(double)a0;
- (void)setTimerDurationInSeconds:(double)a0;
- (BOOL)comfortSoundsAvailable;
- (double)relativeVolume;
- (double)tinnitusBalance;
- (double)mediaVolume;
- (void)setTinnitusBalance:(double)a0;
- (BOOL)comfortSoundsEnabled;
- (void)setTimerOption:(unsigned long long)a0;
- (unsigned long long)tinnitusFilterMode;
- (BOOL)forceMixingBehavior;
- (void)setTinnitusFilterMode:(unsigned long long)a0;
- (id)keysMonitoredForUpdates;
- (BOOL)tinnitusFilterEnabled;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (void)setForceMixingBehavior:(BOOL)a0;
- (void)setActiveTimerEndTimeStamp:(double)a0;
- (void)setComfortSoundsEnabled:(BOOL)a0;
- (void)setMediaVolume:(double)a0;
- (void)setTimerInHoursAndMinutes:(long long)a0 minutes:(long long)a1;

@end
