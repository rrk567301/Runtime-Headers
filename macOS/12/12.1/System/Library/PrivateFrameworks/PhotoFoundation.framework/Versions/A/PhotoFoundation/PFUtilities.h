@interface PFUtilities : NSObject

+ (BOOL)didStopInDebugger;
+ (void)getSystemVersionMajor:(unsigned int *)a0 systemVersionMinor:(unsigned int *)a1 systemVersionBugFixRev:(unsigned int *)a2;
+ (BOOL)runningUnderDebugger;
+ (BOOL)isOnACPower:(double *)a0;
+ (BOOL)hasInternalPhotosDiagnosticsCapability;
+ (BOOL)hasEnabledManagedUserDefault:(id)a0;

@end
