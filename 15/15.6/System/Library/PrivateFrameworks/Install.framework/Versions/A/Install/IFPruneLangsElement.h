@interface IFPruneLangsElement : IFInstallQueueElement

+ (char)canRunForPackage:(id)a0;

- (long long)run;
- (id)logDescription;
- (void)_pruneLanguagePaths:(id)a0 withPackageController:(id)a1;

@end
