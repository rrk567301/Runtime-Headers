@class NSString, IFDiskObject;

@interface IFScriptElement : IFTaskElement {
    NSString *_action;
    char _runScriptInTemp;
    IFDiskObject *_targetVolume;
}

- (void)dealloc;
- (id)description;
- (long long)run;
- (id)logDescription;
- (id)initWithAction:(id)a0 stateDelegate:(id)a1 targetVolume:(id)a2 packageController:(id)a3;
- (void)setRunScriptInTemp:(char)a0;
- (void)setTaskEnvironment;

@end
