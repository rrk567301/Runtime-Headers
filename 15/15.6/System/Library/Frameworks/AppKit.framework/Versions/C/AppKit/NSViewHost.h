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

- (void)dealloc;
- (void).cxx_destruct;
- (char)handleEvent:(id)a0;
- (id)initWithView:(id)a0 traits:(id)a1 delegate:(id)a2;
- (char)makeFirstResponder:(id)a0;
- (void)sendEvents:(id)a0;
- (void)update;
- (void)viewHostingContextNeedsUpdate:(id)a0;

@end
