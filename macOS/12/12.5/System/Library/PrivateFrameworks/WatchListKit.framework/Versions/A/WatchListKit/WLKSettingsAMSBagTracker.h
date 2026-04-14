@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (id)init;
- (void).cxx_destruct;
- (void)_updateKeys:(id)a0;
- (BOOL)_amsBagBoolValueForKey:(id)a0;
- (void)_setIsNowPlayingEnabled:(BOOL)a0;
- (void)_setIsSportsEnabled:(BOOL)a0;
- (void)_updateBoolValueForTrackedKey:(id)a0;
- (void)updateTrackedBagValues;
- (void)updateTrackedBagValuesWithChangedKeys:(id)a0;
- (id)isNowPlayingEnabled;
- (id)isSportsEnabled;

@end
