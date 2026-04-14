@class NSString;

@interface RTHealthKitManager : RTService <RTDiagnosticProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringFromRTHealthKitWorkoutActivityType:(long long)a0;

@end
