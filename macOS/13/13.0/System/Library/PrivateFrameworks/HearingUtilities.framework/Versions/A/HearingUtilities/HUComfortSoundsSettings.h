@class HUComfortSound;

@interface HUComfortSoundsSettings : HCSettings

@property (nonatomic) BOOL comfortSoundsEnabled;
@property (nonatomic) BOOL mixesWithMedia;
@property (nonatomic) BOOL stopsOnLock;
@property (retain, nonatomic) HUComfortSound *selectedComfortSound;
@property (nonatomic) double relativeVolume;
@property (nonatomic) double mediaVolume;
@property (nonatomic) double lastEnablementTimestamp;
@property (nonatomic) BOOL forceMixingBehavior;

+ (id)sharedInstance;

- (void)reset;
- (void)logMessage:(id)a0;
- (double)mediaVolume;
- (void)setMediaVolume:(double)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)setRelativeVolume:(double)a0;
- (double)relativeVolume;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (BOOL)shouldStoreLocally;
- (id)keysToSync;
- (BOOL)comfortSoundsEnabled;
- (void)setComfortSoundsEnabled:(BOOL)a0;
- (BOOL)mixesWithMedia;
- (void)setMixesWithMedia:(BOOL)a0;
- (BOOL)stopsOnLock;
- (void)setStopsOnLock:(BOOL)a0;
- (double)lastEnablementTimestamp;
- (void)setLastEnablementTimestamp:(double)a0;
- (BOOL)forceMixingBehavior;
- (void)setForceMixingBehavior:(BOOL)a0;
- (BOOL)comfortSoundsAvailable;

@end
