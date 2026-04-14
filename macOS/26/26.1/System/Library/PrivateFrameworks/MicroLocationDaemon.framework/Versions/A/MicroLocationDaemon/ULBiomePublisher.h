@interface ULBiomePublisher : NSObject

+ (void)cleanup;
+ (void)saveEventForDebugInitialBringUp;
+ (void)_saveEventsWithSource:(id)a0 events:(id)a1;
+ (void)saveMicroLocationLocalizationEvents:(id)a0;
+ (void)saveMicroLocationVisitEvents:(id)a0;

@end
