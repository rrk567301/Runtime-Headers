@class NSSet;

@interface IFAppRegisterElement : IFInstallQueueElement {
    NSSet *_lsPaths;
    int _installKey;
}

- (long long)run;
- (id)logDescription;
- (void)dealloc;
- (id)initWithLaunchServicesPaths:(id)a0 withInstallKey:(int)a1;

@end
