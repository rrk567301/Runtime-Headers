@class NSString;

@interface RTHealthKitManager : RTService <RTDiagnosticProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringFromRTHealthKitWorkoutActivityType:(long long)a0;

- (void)sendDiagnosticsToURL:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 platform:(id)a2;

@end
