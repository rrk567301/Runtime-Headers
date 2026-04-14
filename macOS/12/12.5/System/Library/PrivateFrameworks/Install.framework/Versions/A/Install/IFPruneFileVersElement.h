@interface IFPruneFileVersElement : IFInstallQueueElement

+ (BOOL)canRunForPackage:(id)a0;

- (long long)run;
- (id)description;
- (id)logDescription;
- (void)prunePaths:(id)a0 forPackageController:(id)a1 outMessages:(id)a2;
- (long long)builtInVersionCompareFile:(id)a0 withData:(id)a1;
- (long long)externalVersionCompareFile:(id)a0 withData:(id)a1 usingTool:(id)a2;

@end
