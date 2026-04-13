@class PKInstallCommitManager;

@interface PKPrepareForCommitInstallOperation : PKInstallOperation {
    PKInstallCommitManager *_manager;
}

- (void)dealloc;
- (int)installState;
- (void)main;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2 manager:(id)a3;

@end
