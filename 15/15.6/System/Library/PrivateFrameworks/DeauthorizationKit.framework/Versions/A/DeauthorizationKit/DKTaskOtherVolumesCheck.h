@class DKDiskLayoutWarningWindowController, NSWindow, NSObject;
@protocol OS_dispatch_semaphore;

@interface DKTaskOtherVolumesCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property (retain) NSObject<OS_dispatch_semaphore> *diskPopulateCompleteSemaphore;
@property (retain) DKDiskLayoutWarningWindowController *diskLayoutWarningWindowController;

+ (char)validDiskLayout;

- (void).cxx_destruct;
- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (char)needsToRun;
- (char)runWithError:(id *)a0;

@end
