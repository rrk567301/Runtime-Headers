@interface PFUtilities : NSObject

+ (BOOL)runningUnderDebugger;
+ (BOOL)didStopInDebugger;
+ (void)getSystemVersionMajor:(unsigned int *)a0 systemVersionMinor:(unsigned int *)a1 systemVersionBugFixRev:(unsigned int *)a2;
+ (BOOL)isOnACPower:(double *)a0;
+ (BOOL)hasInternalPhotosDiagnosticsCapability;
+ (BOOL)hasEnabledManagedUserDefault:(id)a0;

@end
