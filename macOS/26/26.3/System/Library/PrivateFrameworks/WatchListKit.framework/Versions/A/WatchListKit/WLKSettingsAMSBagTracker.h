@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (void)_updateBoolValueForTrackedKey:(id)a0;
- (id)init;
- (void)_updateKeys:(id)a0;
- (void)updateTrackedBagValuesWithChangedKeys:(id)a0;
- (id)isNowPlayingEnabled;
- (void).cxx_destruct;
- (void)_removeInactiveKeys:(id)a0;
- (void)updateTrackedBagValues;
- (void)_setIsNowPlayingEnabled:(BOOL)a0;

@end
