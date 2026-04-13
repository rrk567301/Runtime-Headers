@class MTLoadUrlEventHandler, MTFlexiblePerfEventHandler, MTPageRenderEventHandler;

@interface MTPerfEventHandlers : MTEventHandlers

@property (readonly) MTPageRenderEventHandler *pageRender;
@property (readonly) MTLoadUrlEventHandler *loadUrl;
@property (readonly) MTFlexiblePerfEventHandler *flexible;

- (void).cxx_destruct;
- (void)registerDefaultEventHandlers;
- (Class)baseDataProviderClass;

@end
