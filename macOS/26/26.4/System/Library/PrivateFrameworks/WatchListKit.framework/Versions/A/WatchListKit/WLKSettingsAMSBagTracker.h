@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (void)updateTrackedBagValuesWithChangedKeys:(id)a0;
- (void)updateTrackedBagValues;
- (void)_setIsNowPlayingEnabled:(BOOL)a0;
- (id)isNowPlayingEnabled;
- (void)_updateKeys:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_updateBoolValueForTrackedKey:(id)a0;
- (void)_removeInactiveKeys:(id)a0;

@end
