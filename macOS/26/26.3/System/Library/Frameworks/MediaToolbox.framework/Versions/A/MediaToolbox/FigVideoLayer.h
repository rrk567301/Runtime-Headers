@class FigVideoLayerInternal;

@interface FigVideoLayer : FigThreadSafeCALayer {
    FigVideoLayerInternal *_videoLayer;
    unsigned int _contentsSlotID;
}

@property (nonatomic) unsigned int contentsSlotID;

+ (id)defaultActionForKey:(id)a0;

- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)actionForKey:(id)a0;
- (id)initWithLayer:(id)a0;
- (void)_didChangeRenderingStatus:(id)a0;
- (void)_setupInternalFigVideoLayer;
- (void)_setupTraceLevel;
- (void)_sendVideoLayerDisplayChangedNotification;
- (id)initWithDeferredTransaction:(struct OpaqueFigDeferredTransaction { } *)a0;
- (BOOL)isVideoLayerBeingServiced;
- (void)notificationBarrier;
- (void)dealloc;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (unsigned int)layerDisplayID;
- (id)initWithoutDeferredTransaction;
- (void)layerDidChangeDisplay:(unsigned int)a0;

@end
