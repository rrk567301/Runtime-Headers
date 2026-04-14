@class _PASLock;

@interface GDViewAccessRequester : NSObject {
    _PASLock *_lock;
}

+ (BOOL)currentProcessIsSandboxed;

- (id)init;
- (void).cxx_destruct;
- (id)requestAssertionForViewName:(id)a0 error:(id *)a1;
- (id)_requestAssertionForViewName:(id)a0 error:(id *)a1;

@end
