@class NSMutableDictionary;

@interface CUIPerformanceLogManager : NSObject {
    NSMutableDictionary *performanceLogs;
}

+ (id)sharedPerformanceLogManager;

- (void)dealloc;
- (id)init;
- (void)logMeasurements:(id)a0 forInstrument:(id)a1;

@end
