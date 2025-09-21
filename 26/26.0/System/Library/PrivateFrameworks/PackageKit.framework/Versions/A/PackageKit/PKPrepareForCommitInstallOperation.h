@class PKInstallCommitManager;

@interface PKPrepareForCommitInstallOperation : PKInstallOperation {
    PKInstallCommitManager *_manager;
}

- (void)main;
- (void)dealloc;
- (int)installState;

@end
