@class HUComfortSound;

@interface HUComfortSoundsSettings : HCSettings

@property (nonatomic) char comfortSoundsEnabled;
@property (nonatomic) char mixesWithMedia;
@property (nonatomic) char stopsOnLock;
@property (retain, nonatomic) HUComfortSound *selectedComfortSound;
@property (nonatomic) double relativeVolume;
@property (nonatomic) double mediaVolume;
@property (nonatomic) double lastEnablementTimestamp;
@property (nonatomic) char forceMixingBehavior;

+ (id)sharedInstance;

- (void)reset;
- (void)logMessage:(id)a0;
- (void)setMediaVolume:(double)a0;
- (double)mediaVolume;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)setRelativeVolume:(double)a0;
- (double)relativeVolume;
- (id)keysMonitoredForUpdates;
- (id)keysToSync;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (char)shouldStoreLocally;
- (char)comfortSoundsEnabled;
- (void)setStopsOnLock:(char)a0;
- (char)comfortSoundsAvailable;
- (char)forceMixingBehavior;
- (double)lastEnablementTimestamp;
- (char)mixesWithMedia;
- (void)setComfortSoundsEnabled:(char)a0;
- (void)setForceMixingBehavior:(char)a0;
- (void)setLastEnablementTimestamp:(double)a0;
- (void)setMixesWithMedia:(char)a0;
- (char)stopsOnLock;

@end
