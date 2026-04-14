@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer {
    FigVideoLayerInternal *_videoLayer;
}

+ (id)defaultActionForKey:(id)a0;

- (void)dealloc;
- (id)init;
- (id)actionForKey:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)initWithLayer:(id)a0;
- (void)layerDidChangeDisplay:(unsigned int)a0;
- (void)notificationBarrier;
- (unsigned int)layerDisplayID;
- (void)_didChangeRenderingStatus:(id)a0;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)_sendVideoLayerDisplayChangedNotification;
- (BOOL)isVideoLayerBeingServiced;

@end
