@class NSString;
@protocol MTL4Compiler;

@interface _MTL4CompilerTask : _MTLObjectWithLabel <MTL4CompilerTaskGGDSPI> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _statusMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _statusCondition;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _tokenCondition;
    struct weak_ptr<MTLCompileToken> { struct MTLCompileToken *__ptr_; struct __shared_weak_count *__cntrl_; } _internalCompileTokenWeak;
    BOOL _statusMutexInitialized;
    BOOL _statusConditionInitialized;
    BOOL _tokenConditionInitialized;
}

@property (readonly) id<MTL4Compiler> compiler;
@property (readonly) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)tryCancel;
- (void)dealloc;
- (void)waitUntilCompleted;
- (void)setStatus:(long long)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCompiler:(id)a0;
- (void)clearInternalCompileTokenIfMatches:(void *)a0;
- (void)setInternalCompileToken:(void *)a0;

@end
