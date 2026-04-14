@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {
    NSProgress *_originalProgress;
}

- (void)_update;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithMirroredProgress:(id)a0;
- (id)_initWithMirroredProgressForSubclasses:(id)a0;
- (void).cxx_destruct;
- (void)_replaceObservedProgressWith:(id)a0;
- (void)_registerForKVO;
- (void)_unregisterForKVO;
- (void)dealloc;

@end
