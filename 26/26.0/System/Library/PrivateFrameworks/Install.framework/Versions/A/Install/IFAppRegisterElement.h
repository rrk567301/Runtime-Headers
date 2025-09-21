@class NSSet;

@interface IFAppRegisterElement : IFInstallQueueElement {
    NSSet *_lsPaths;
    int _installKey;
}

- (id)logDescription;
- (void)dealloc;
- (long long)run;
- (id)initWithLaunchServicesPaths:(id)a0 withInstallKey:(int)a1;

@end
