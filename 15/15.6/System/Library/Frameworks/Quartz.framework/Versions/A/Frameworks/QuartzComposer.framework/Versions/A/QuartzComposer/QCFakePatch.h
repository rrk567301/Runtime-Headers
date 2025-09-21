@interface QCFakePatch : QCPatch

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

@end
