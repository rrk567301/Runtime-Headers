@class NSSet;

@interface SidecarKeyValueObserver : SidecarRunLoopSource {
    id _representedObject;
    NSSet *_keys;
}

@property (copy) id /* block */ handler;

+ (id)observeObject:(id)a0 forKeys:(id)a1;

- (void)dealloc;
- (void)perform;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
