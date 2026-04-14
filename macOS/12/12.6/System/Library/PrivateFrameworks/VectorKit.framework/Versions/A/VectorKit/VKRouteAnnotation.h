@class GEOStyleAttributes, GEOMiniCard, GEOComposedRouteAnnotation;

@interface VKRouteAnnotation : VKTrafficFeature {
    GEOComposedRouteAnnotation *_routeAnnotation;
}

@property (readonly, nonatomic, getter=_originalStyleAttributes) GEOStyleAttributes *originalStyleAttributes;
@property (readonly, nonatomic) GEOMiniCard *infoCard;

- (void)dealloc;
- (void)populateDebugNode:(void *)a0;
- (id)initWithRouteAnnotation:(id)a0 onRoute:(id)a1;

@end
