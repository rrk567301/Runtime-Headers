@class BAAgentSystemProxy;

@interface BAAppStoreClient : NSObject {
    BAAgentSystemProxy *_systemProxy;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)performEventWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)prepareForAppInstallWithDescriptor:(id)a0 error:(id *)a1;

@end
