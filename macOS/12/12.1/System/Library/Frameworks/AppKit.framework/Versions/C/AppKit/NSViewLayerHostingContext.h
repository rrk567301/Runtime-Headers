@class CAContext;
@protocol NSViewLayerHostingContextDelegate;

@interface NSViewLayerHostingContext : NSViewHostingContext {
    CAContext *_context;
    id<NSViewLayerHostingContextDelegate> _delegate;
}

@property (readonly) unsigned int contextId;

- (void)dealloc;
- (void).cxx_destruct;
- (void)update;
- (void)setNeedsUpdate;
- (id)initWithContentView:(id)a0 traits:(id)a1 delegate:(id)a2;

@end
