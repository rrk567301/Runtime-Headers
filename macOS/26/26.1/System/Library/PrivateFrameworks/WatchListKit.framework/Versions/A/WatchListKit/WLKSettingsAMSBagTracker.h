@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (void)_removeInactiveKeys:(id)a0;
- (void)_updateBoolValueForTrackedKey:(id)a0;
- (id)isNowPlayingEnabled;
- (void)_setIsNowPlayingEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateTrackedBagValues;
- (void)updateTrackedBagValuesWithChangedKeys:(id)a0;
- (void)_updateKeys:(id)a0;
- (id)init;

@end
