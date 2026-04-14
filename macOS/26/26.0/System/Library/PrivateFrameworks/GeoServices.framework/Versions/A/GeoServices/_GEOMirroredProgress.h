@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {
    NSProgress *_originalProgress;
}

- (void)_replaceObservedProgressWith:(id)a0;
- (void)_unregisterForKVO;
- (void)_update;
- (void)dealloc;
- (void)_registerForKVO;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_initWithMirroredProgressForSubclasses:(id)a0;
- (id)initWithMirroredProgress:(id)a0;
- (void).cxx_destruct;

@end
