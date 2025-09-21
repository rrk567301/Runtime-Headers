@class NSString;

@interface PXNumberFilter : PXObservable <PXMutableNumberFilter> {
    struct { BOOL output; } _needsUpdateFlags;
}

@property (nonatomic, setter=_setOutput:) double output;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double lastTime;
@property (readonly, nonatomic) double input;
@property (nonatomic) double time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)setInput:(double)a0;
- (id)init;
- (id)initWithInput:(double)a0;
- (void)didPerformChanges;
- (void)performChanges:(id /* block */)a0;
- (void)_invalidateOutput;
- (void)invalidateOutput;
- (id)mutableChangeObject;
- (double)updatedOutput;
- (void)_setLastTime:(double)a0;
- (void)_updateOutputIfNeeded;
- (double)initialOutputForInput:(double)a0;

@end
