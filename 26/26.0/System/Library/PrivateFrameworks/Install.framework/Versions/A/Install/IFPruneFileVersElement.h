@interface IFPruneFileVersElement : IFInstallQueueElement

+ (BOOL)canRunForPackage:(id)a0;

- (id)logDescription;
- (long long)run;
- (id)description;
- (long long)builtInVersionCompareFile:(id)a0 withData:(id)a1;
- (long long)externalVersionCompareFile:(id)a0 withData:(id)a1 usingTool:(id)a2;
- (void)prunePaths:(id)a0 forPackageController:(id)a1 outMessages:(id)a2;

@end
