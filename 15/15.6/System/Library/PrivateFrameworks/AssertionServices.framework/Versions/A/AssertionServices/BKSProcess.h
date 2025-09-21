@class RBSAssertion, RBSProcessMonitor, RBSProcessIdentity, BKSProcessAssertion, BSProcessHandle, BKSProcessExitContext, RBSProcessHandle;

@interface BKSProcess : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _bootstrapped;
    RBSProcessIdentity *_identity;
    RBSProcessHandle *_processHandle;
    RBSAssertion *_assertion;
    RBSProcessMonitor *_monitor;
    BKSProcessExitContext *_lastExitContext;
    BKSProcessAssertion *_mediaAssertion;
    BKSProcessAssertion *_audioAssertion;
}

@property (nonatomic) char nowPlayingWithAudio;
@property (nonatomic) char recordingAudio;
@property (nonatomic) long long terminationReason;
@property (readonly, nonatomic) BSProcessHandle *handle;
@property (readonly, nonatomic) double backgroundTimeRemaining;
@property (readonly, nonatomic) BKSProcessExitContext *lastExitContext;

+ (id)currentProcess;
+ (double)backgroundTimeRemaining;
+ (id)busyExtensionInstances:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithBundleIdentifier:(id)a0;
- (char)_bootstrapWithError:(out id *)a0;
- (void)bootstrapCurrentProcess;
- (char)bootstrapWithProcessHandle:(id)a0 error:(out id *)a1;
- (id)initWithProcessIdentity:(id)a0;

@end
