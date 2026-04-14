@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {
    NSProgress *_originalProgress;
}

- (void)_update;
- (id)_initWithMirroredProgressForSubclasses:(id)a0;
- (void)_replaceObservedProgressWith:(id)a0;
- (void)_unregisterForKVO;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_registerForKVO;
- (void)dealloc;
- (id)initWithMirroredProgress:(id)a0;
- (void).cxx_destruct;

@end
