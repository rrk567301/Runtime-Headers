@class _PASXPCClientHelper;

@interface PSGInternalClient : NSObject {
    _PASXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_remoteObjectProxy;
- (id)sysdiagnoseInformationWithError:(id *)a0;

@end
