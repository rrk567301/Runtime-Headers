@interface DESServiceAccess : NSObject

+ (char)hasMLRCtlEntitlement:(id)a0;
+ (char)hasOnDemandLaunchEntitlement:(id)a0;
+ (char)hasRecordAccessToBundleId:(id)a0 connection:(id)a1 error:(id *)a2;
+ (char)hasToolEntitlement:(id)a0;

@end
