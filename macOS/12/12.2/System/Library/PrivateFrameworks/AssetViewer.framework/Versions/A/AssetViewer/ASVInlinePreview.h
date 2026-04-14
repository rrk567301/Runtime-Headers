@class NSUUID, CALayer, CALayerHost;

@interface ASVInlinePreview : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    CALayer *_loadingLayer;
    CALayerHost *_layerHost;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic) unsigned int contextId;

+ (void)_kill:(int)a0;
+ (id)sharedXPCConnection;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRemoteContext:(unsigned int)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 UUID:(id)a1;
- (void)preparePreviewOfFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupRemoteConnectionWithCompletionHandler:(id /* block */)a0;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completionHandler:(id /* block */)a1;
- (void)setFrameWithinFencedTransaction:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDownAtLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)mouseDraggedAtLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)mouseUpAtLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)setWantsDebugColors:(BOOL)a0;

@end
