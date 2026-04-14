@class NSMutableDictionary;

@interface BRCUploadV1PerformanceTrackerManager : NSObject {
    NSMutableDictionary *_personaToTrackers;
}

+ (id)sharedManager;

- (id)_init;
- (void).cxx_destruct;
- (void)_removeAllTrackers;
- (void)removeTrackerForCurrentPersona;
- (id)trackerForCurrentPersona;

@end
