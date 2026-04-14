@class NSSet;

@interface IFAppRegisterElement : IFInstallQueueElement {
    NSSet *_lsPaths;
    int _installKey;
}

- (long long)run;
- (void)dealloc;
- (id)logDescription;
- (id)initWithLaunchServicesPaths:(id)a0 withInstallKey:(int)a1;

@end
