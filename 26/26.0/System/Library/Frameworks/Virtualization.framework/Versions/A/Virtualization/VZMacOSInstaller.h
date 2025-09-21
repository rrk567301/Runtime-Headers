@class NSProgress, NSURL, VZVirtualMachine, NSError;

@interface VZMacOSInstaller : NSObject {
    BOOL _virtualMachineStarted;
    BOOL _installStarted;
    BOOL _installCompleted;
    BOOL _installCancelled;
    BOOL _disableMobileDeviceUpdate;
    id /* block */ _completionHandler;
    struct shared_ptr<VzInstallation::InstallerMessenger> { struct InstallerMessenger *__ptr_; struct __shared_weak_count *__cntrl_; } _messenger;
    NSError *_installError;
}

@property (readonly) NSProgress *progress;
@property (readonly) VZVirtualMachine *virtualMachine;
@property (readonly) NSURL *restoreImageURL;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_disableMobileDeviceUpdate;
- (id)initWithVirtualMachine:(id)a0 restoreImageURL:(id)a1;
- (void)installWithCompletionHandler:(id /* block */)a0;

@end
