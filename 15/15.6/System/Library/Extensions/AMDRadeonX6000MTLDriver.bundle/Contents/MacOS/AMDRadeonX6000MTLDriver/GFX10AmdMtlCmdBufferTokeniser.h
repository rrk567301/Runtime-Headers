@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface GFX10AmdMtlCmdBufferTokeniser : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mutex;
    NSMutableArray *tokens;
    NSObject<OS_dispatch_semaphore> *semaphore;
    NSObject<OS_dispatch_semaphore> *semaphore1;
    BOOL passThrough;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
