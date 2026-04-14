@class NSObject, NSArray, FINode;

@interface DSProvidersObserver : NSObject {
    struct TNodePtr { FINode *fFINode; } fParentNode;
    NSObject *_token;
    NSArray *_providers;
    struct unique_ptr<AutoSignpostInterval_FPProvider_Gathering, std::default_delete<AutoSignpostInterval_FPProvider_Gathering>> { struct { struct AutoSignpostInterval_FPProvider_Gathering *__ptr_; } ; } _gatheringSignpost;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _receiveChangesLock;
}

@property (readonly) BOOL populated;

- (void)startObserving;
- (void).cxx_destruct;
- (id)providers;
- (id).cxx_construct;
- (void)stopObserving;
- (void)setProviders:(id)a0;
- (id)providersByAddingProviderIfNeeded:(id)a0;
- (void)receivedChanges:(id)a0;

@end
