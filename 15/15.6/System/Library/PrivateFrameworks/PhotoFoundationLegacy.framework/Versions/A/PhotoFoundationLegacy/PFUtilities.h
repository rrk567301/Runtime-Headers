@interface PFUtilities : NSObject

+ (char)runningUnderDebugger;
+ (char)didStopInDebugger;
+ (void)getSystemVersionMajor:(unsigned int *)a0 systemVersionMinor:(unsigned int *)a1 systemVersionBugFixRev:(unsigned int *)a2;
+ (char)hasEnabledManagedUserDefault:(id)a0;
+ (char)hasInternalPhotosDiagnosticsCapability;
+ (char)isOnACPower:(double *)a0;

@end
