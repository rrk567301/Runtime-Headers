@interface SMCopyEngineUtilities : NSObject

+ (void)initialize;
+ (BOOL)shouldIgnoreErrorFile:(id)a0;
+ (void)ensureParentPathExists:(id)a0;
+ (void)ensureParentPathExists:(id)a0 matchingPermissionsOfPath:(id)a1;

@end
