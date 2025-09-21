@class BAAgentSystemProxy;

@interface BAAppStoreClient : NSObject {
    BAAgentSystemProxy *_systemProxy;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)performEventWithDescriptor:(id)a0 error:(id *)a1;
- (char)prepareForAppInstallWithDescriptor:(id)a0 error:(id *)a1;

@end
