@interface VZVirtualMachineStartOptions : NSObject {
    long long _fatalErrorAction;
    long long _panicAction;
    long long _restartAction;
}

@property (setter=_setFatalErrorAction:) long long _fatalErrorAction;
@property (setter=_setPanicAction:) long long _panicAction;
@property (setter=_setRestartAction:) long long _restartAction;
@property (readonly) struct StartOptions { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } _startOptions;

- (id)init;

@end
