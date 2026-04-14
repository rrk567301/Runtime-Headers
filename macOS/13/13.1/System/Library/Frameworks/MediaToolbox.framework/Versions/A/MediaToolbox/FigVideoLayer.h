@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer {
    FigVideoLayerInternal *_videoLayer;
}

+ (id)defaultActionForKey:(id)a0;

- (void)dealloc;
- (id)init;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)initWithLayer:(id)a0;
- (id)actionForKey:(id)a0;
- (void)layerDidChangeDisplay:(unsigned int)a0;
- (void)_didChangeRenderingStatus:(id)a0;
- (BOOL)isVideoLayerBeingServiced;
- (unsigned int)layerDisplayID;
- (void)notificationBarrier;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)_sendVideoLayerDisplayChangedNotification;

@end
