@class AMRemoteAction;

@interface AMRemoteActionDelegate : NSObject <AMRemoteActionDelegateXPCProtocol>

@property (weak, nonatomic) AMRemoteAction *remoteAction;

- (void).cxx_destruct;
- (void)remoteActionLogMessage:(id)a0 level:(unsigned long long)a1;
- (void)remoteActionFinishedRunningAsynchronouslyWithOutput:(id)a0 stopped:(BOOL)a1 error:(id)a2;
- (void)remoteActionProgressDidChange:(id)a0;
- (void)remoteActionParametersDidChange:(id)a0 parameterProperties:(id)a1;
- (void)remoteActionSelectedInputTypeDidChange:(id)a0;
- (void)remoteActionSelectedOutputTypeDidChange:(id)a0;
- (id)initWithRemoteAction:(id)a0;

@end
