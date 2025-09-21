@class DKDiskLayoutWarningWindowController, NSWindow, NSObject;
@protocol OS_dispatch_semaphore;

@interface DKTaskOtherVolumesCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property (retain) NSObject<OS_dispatch_semaphore> *diskPopulateCompleteSemaphore;
@property (retain) DKDiskLayoutWarningWindowController *diskLayoutWarningWindowController;

+ (BOOL)validDiskLayout;

- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (void).cxx_destruct;
- (id)initWithHostWindow:(id)a0;
- (BOOL)needsToRun;
- (BOOL)runWithError:(id *)a0;

@end
