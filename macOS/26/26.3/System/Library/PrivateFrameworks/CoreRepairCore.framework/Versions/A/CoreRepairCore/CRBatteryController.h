@interface CRBatteryController : NSObject

+ (id)sharedInstance;
+ (id)setBatteryDateOfFirstUse:(id)a0 error:(id *)a1;
+ (id)getBMUType;
+ (BOOL)psimPresent;
+ (BOOL)supportMultiBatteryTypes;

- (BOOL)_psimPresent;
- (BOOL)_supportMultiBatteryTypes;

@end
