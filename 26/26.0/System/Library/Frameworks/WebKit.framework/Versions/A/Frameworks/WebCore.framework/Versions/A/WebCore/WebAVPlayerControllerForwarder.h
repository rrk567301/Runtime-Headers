@class WebAVPlayerController;

@interface WebAVPlayerControllerForwarder : NSObject {
    struct RetainPtr<WebAVPlayerController> { WebAVPlayerController *m_ptr; } _playerController;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)valueForKey:(id)a0;
- (id)init;
- (id)valueForKeyPath:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (id)valueForUndefinedKey:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (id).cxx_construct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)_forwardingTargetForKeyPath:(id)a0;

@end
