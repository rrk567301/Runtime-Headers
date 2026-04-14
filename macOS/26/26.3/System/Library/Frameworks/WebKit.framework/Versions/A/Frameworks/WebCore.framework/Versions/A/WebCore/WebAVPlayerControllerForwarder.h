@class WebAVPlayerController;

@interface WebAVPlayerControllerForwarder : NSObject {
    struct RetainPtr<WebAVPlayerController> { WebAVPlayerController *m_ptr; } _playerController;
}

- (id)valueForUndefinedKey:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (id)init;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (id).cxx_construct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)valueForKeyPath:(id)a0;
- (id)_forwardingTargetForKeyPath:(id)a0;

@end
