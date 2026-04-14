@interface SMCopyEngineUtilities : NSObject

+ (void)initialize;
+ (void)ensureParentPathExists:(id)a0 matchingPermissionsOfPath:(id)a1;
+ (void)ensureParentPathExists:(id)a0;
+ (BOOL)shouldIgnoreErrorFile:(id)a0;

@end
