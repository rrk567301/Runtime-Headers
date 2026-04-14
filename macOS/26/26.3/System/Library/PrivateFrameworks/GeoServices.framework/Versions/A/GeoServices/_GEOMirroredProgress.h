@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {
    NSProgress *_originalProgress;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_unregisterForKVO;
- (void)_update;
- (void)_replaceObservedProgressWith:(id)a0;
- (void)_registerForKVO;
- (void).cxx_destruct;
- (id)_initWithMirroredProgressForSubclasses:(id)a0;
- (void)dealloc;
- (id)initWithMirroredProgress:(id)a0;

@end
