@class FigVideoLayerInternal;

@interface FigVideoLayer : FigThreadSafeCALayer {
    FigVideoLayerInternal *_videoLayer;
    unsigned int _contentsSlotID;
}

@property (nonatomic) unsigned int contentsSlotID;

+ (id)defaultActionForKey:(id)a0;

- (id)actionForKey:(id)a0;
- (unsigned int)layerDisplayID;
- (void)dealloc;
- (void)_setupTraceLevel;
- (id)initWithLayer:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)_sendVideoLayerDisplayChangedNotification;
- (id)initWithoutDeferredTransaction;
- (void)_setupInternalFigVideoLayer;
- (void)notificationBarrier;
- (void)_didChangeRenderingStatus:(id)a0;
- (void)layerDidChangeDisplay:(unsigned int)a0;
- (BOOL)isVideoLayerBeingServiced;
- (id)initWithDeferredTransaction:(struct OpaqueFigDeferredTransaction { } *)a0;
- (void)_sendVideoLayerIsBeingServicedNotification;

@end
