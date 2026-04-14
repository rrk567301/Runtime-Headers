@class BAAgentSystemProxy;

@interface BAAppStoreClient : NSObject {
    BAAgentSystemProxy *_systemProxy;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (BOOL)performEventWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)prepareForAppInstallWithDescriptor:(id)a0 error:(id *)a1;

@end
