@class NSArray, NSObject;

@interface DSProvidersObserver : NSObject {
    struct TNodePtr { struct TNode *fCountedNode; } fParentNode;
    struct TNSRef<NSObject, void> { NSObject *fRef; } _token;
    struct TNSRef<NSArray<FPProviderDomain *>, void> { NSArray *fRef; } _providers;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    struct TConditionVariable { struct condition_variable_any { struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __cv_; struct shared_ptr<std::mutex> { struct mutex *__ptr_; struct __shared_weak_count *__cntrl_; } __mut_; } fCondition; int fWaitCount; } _cv;
    BOOL populated;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)startObserving;
- (void)stopObserving;
- (struct TNSRef<NSArray<FPProviderDomain *>, void> { id x0; })providers;
- (BOOL)populated;
- (void)blockUntilPopulated;
- (void)collectionSynched;
- (void)setProviders:(id)a0;

@end
