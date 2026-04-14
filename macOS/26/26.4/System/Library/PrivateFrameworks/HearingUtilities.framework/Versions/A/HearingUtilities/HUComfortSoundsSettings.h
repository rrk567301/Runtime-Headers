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
- (BOOL)tinnitusFilterEnabled;
- (BOOL)forceMixingBehavior;
- (BOOL)stopsOnLock;
- (double)mediaVolume;
- (void)setTinnitusFilterEnabled:(BOOL)a0;
- (unsigned long long)timerOption;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)setTimerOption:(unsigned long long)a0;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)keysToSync;
- (BOOL)comfortSoundsAvailable;
- (double)relativeVolume;
- (void)setTimerOnlyOnFirstSession:(BOOL)a0;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (BOOL)mixesWithMedia;
- (void)setRelativeVolume:(double)a0;
- (double)activeTimerEndTimeStamp;
- (void)setActiveTimerEndTimeStamp:(double)a0;
- (BOOL)timerOnlyOnFirstSession;
- (void)setForceMixingBehavior:(BOOL)a0;
- (double)timerEndInterval;
- (void)setTinnitusFilterMode:(unsigned long long)a0;
- (void)setTinnitusBalance:(double)a0;
- (void)setTimerEndInterval:(double)a0;
- (double)lastEnablementTimestamp;
- (BOOL)shouldStoreLocally;
- (double)timerDurationInSeconds;
- (void)reset;
- (BOOL)comfortSoundsEnabled;
- (id)keysMonitoredForUpdates;
- (void)setTimerInHoursAndMinutes:(long long)a0 minutes:(long long)a1;
- (void)setTimerEnabled:(BOOL)a0;
- (void)setTimerDurationInSeconds:(double)a0;
- (void)setStopsOnLock:(BOOL)a0;
- (unsigned long long)tinnitusFilterMode;
- (double)tinnitusBalance;
- (void)setComfortSoundsEnabled:(BOOL)a0;
- (void)setMediaVolume:(double)a0;
- (BOOL)timerEnabled;
- (void)setMixesWithMedia:(BOOL)a0;
- (void)setLastEnablementTimestamp:(double)a0;
- (void)logMessage:(id)a0;

@end
