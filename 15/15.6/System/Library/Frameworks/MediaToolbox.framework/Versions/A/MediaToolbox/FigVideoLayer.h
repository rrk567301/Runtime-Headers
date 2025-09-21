@class FigVideoLayerInternal;

@interface FigVideoLayer : FigThreadSafeCALayer {
    FigVideoLayerInternal *_videoLayer;
}

+ (id)defaultActionForKey:(id)a0;

- (void)dealloc;
- (id)actionForKey:(id)a0;
- (id)initWithLayer:(id)a0;
- (void)layerDidBecomeVisible:(char)a0;
- (void)layerDidChangeDisplay:(unsigned int)a0;
- (void)_didChangeRenderingStatus:(id)a0;
- (void)_sendVideoLayerDisplayChangedNotification;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)_setupInternalFigVideoLayer;
- (void)_setupTraceLevel;
- (id)initWithDeferredTransaction:(struct OpaqueFigDeferredTransaction { } *)a0;
- (id)initWithoutDeferredTransaction;
- (char)isVideoLayerBeingServiced;
- (unsigned int)layerDisplayID;
- (void)notificationBarrier;

@end
