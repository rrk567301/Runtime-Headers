@interface IFPruneLangsElement : IFInstallQueueElement

+ (BOOL)canRunForPackage:(id)a0;

- (id)logDescription;
- (long long)run;
- (void)_pruneLanguagePaths:(id)a0 withPackageController:(id)a1;

@end
