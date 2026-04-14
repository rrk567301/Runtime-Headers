@interface _VZVirtualMachineStartOptions : NSObject

@property BOOL forceDFU;
@property BOOL stopInIBootStage1;
@property BOOL stopInIBootStage2;
@property BOOL bootMacOSRecovery;
@property long long panicAction;
@property long long restartAction;

- (id)init;

@end
