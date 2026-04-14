@class _PASXPCClientHelper;

@interface PSGInternalClient : NSObject {
    _PASXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)_remoteObjectProxy;
- (void).cxx_destruct;
- (id)init;
- (id)sysdiagnoseInformationWithError:(id *)a0;

@end
