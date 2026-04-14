@class FigVideoLayerInternal;

@interface FigVideoLayer : FigThreadSafeCALayer {
    FigVideoLayerInternal *_videoLayer;
    unsigned int _contentsSlotID;
}

@property (nonatomic) unsigned int contentsSlotID;

+ (id)defaultActionForKey:(id)a0;

- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)actionForKey:(id)a0;
- (BOOL)isVideoLayerBeingServiced;
- (id)initWithoutDeferredTransaction;
- (void)_sendVideoLayerDisplayChangedNotification;
- (id)initWithDeferredTransaction:(struct OpaqueFigDeferredTransaction { } *)a0;
- (id)initWithLayer:(id)a0;
- (void)_setupInternalFigVideoLayer;
- (unsigned int)layerDisplayID;
- (void)layerDidChangeDisplay:(unsigned int)a0;
- (void)_setupTraceLevel;
- (void)notificationBarrier;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)_didChangeRenderingStatus:(id)a0;
- (void)dealloc;

@end
