@class CALayer, NSString;

@interface PXCALayerPromise : PXObservable <PXMutableCALayerPromise, CALayerDelegate> {
    char _startedLayerRealization;
}

@property (retain, nonatomic, setter=_setLayer:) CALayer *layer;
@property (readonly, nonatomic) char shouldCancel;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) double contentsScale;
@property (readonly, nonatomic) char rendersAsynchronously;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsScale:(double)a0;
- (void)setRendersAsynchronously:(char)a0;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (void)invalidateLayer;
- (void)_handlePreparedLayer:(id)a0;
- (void)_realizeLayer;
- (void)cancelLayerRealization;
- (id)createCustomLayer;
- (void)drawLayerContentInContext:(struct CGContext { } *)a0;
- (void)startLayerRealization;

@end
