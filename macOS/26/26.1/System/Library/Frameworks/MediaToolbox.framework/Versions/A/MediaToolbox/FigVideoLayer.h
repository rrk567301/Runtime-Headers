@class FigVideoLayerInternal;

@interface FigVideoLayer : FigThreadSafeCALayer {
    FigVideoLayerInternal *_videoLayer;
    unsigned int _contentsSlotID;
}

@property (nonatomic) unsigned int contentsSlotID;

+ (id)defaultActionForKey:(id)a0;

- (id)actionForKey:(id)a0;
- (id)initWithLayer:(id)a0;
- (void)_didChangeRenderingStatus:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)initWithDeferredTransaction:(struct OpaqueFigDeferredTransaction { } *)a0;
- (void)_sendVideoLayerDisplayChangedNotification;
- (BOOL)isVideoLayerBeingServiced;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (id)initWithoutDeferredTransaction;
- (void)dealloc;
- (void)_setupInternalFigVideoLayer;
- (void)layerDidChangeDisplay:(unsigned int)a0;
- (unsigned int)layerDisplayID;
- (void)_setupTraceLevel;
- (void)notificationBarrier;

@end
