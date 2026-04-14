@class NSString, GEOComposedRoute;

@interface MKRouteLinkPresentationActivityProvider : MKRouteActivityProvider <MKActivityItemLinkPresentationSource> {
    GEOComposedRoute *_composedRoute;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0 destination:(id)a1 composedRoute:(id)a2;

@end
