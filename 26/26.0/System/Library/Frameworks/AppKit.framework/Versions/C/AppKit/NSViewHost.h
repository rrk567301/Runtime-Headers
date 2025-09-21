@class NSViewHostingTraits, NSResponder, NSViewLayerHostingContext, CALayer, CALayerHost;
@protocol NSViewHostDelegate;

@interface NSViewHost : NSObject <NSViewLayerHostingContextDelegate> {
    NSViewLayerHostingContext *_context;
    CALayerHost *_layerHost;
    id<NSViewHostDelegate> _delegate;
}

@property (readonly) CALayer *layerHost;
@property (readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (readonly) NSResponder *firstResponder;
@property (copy) NSViewHostingTraits *hostingTraits;

- (BOOL)handleEvent:(id)a0;
- (void)dealloc;
- (void)sendEvents:(id)a0;
- (void)update;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 traits:(id)a1 delegate:(id)a2;
- (BOOL)makeFirstResponder:(id)a0;
- (void)viewHostingContextNeedsUpdate:(id)a0;

@end
