@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (void)updateTrackedBagValuesWithChangedKeys:(id)a0;
- (void)_removeInactiveKeys:(id)a0;
- (void)_updateKeys:(id)a0;
- (id)init;
- (void)_setIsNowPlayingEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)isNowPlayingEnabled;
- (void)updateTrackedBagValues;
- (void)_updateBoolValueForTrackedKey:(id)a0;

@end
