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
- (id)initWithContentView:(id)a0 traits:(id)a1 delegate:(id)a2;
- (void)setNeedsUpdate;

@end
