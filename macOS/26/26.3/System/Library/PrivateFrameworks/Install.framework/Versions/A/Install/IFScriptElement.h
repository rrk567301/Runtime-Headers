@class NSString, IFDiskObject;

@interface IFScriptElement : IFTaskElement {
    NSString *_action;
    BOOL _runScriptInTemp;
    IFDiskObject *_targetVolume;
}

- (long long)run;
- (id)description;
- (id)logDescription;
- (void)dealloc;
- (id)initWithAction:(id)a0 stateDelegate:(id)a1 targetVolume:(id)a2 packageController:(id)a3;
- (void)setRunScriptInTemp:(BOOL)a0;
- (void)setTaskEnvironment;

@end
