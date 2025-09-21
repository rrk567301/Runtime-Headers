@class NSString, IFInstallJob;

@interface IFEndOfInstallJobElement : IFInstallQueueElement {
    IFInstallJob *_job;
    NSString *_jobTitle;
    int _installKey;
}

- (id)logDescription;
- (void)dealloc;
- (long long)run;
- (id)description;
- (id)initWithInstallJob:(id)a0 jobTitle:(id)a1 installKey:(int)a2;
- (void)touchExtensionsOnVolume:(id)a0;
- (void)touchPath:(id)a0 onVolumePath:(id)a1;

@end
