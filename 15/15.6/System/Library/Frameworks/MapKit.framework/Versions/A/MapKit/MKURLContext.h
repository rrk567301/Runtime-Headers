@class GEOCompanionRouteContext;

@interface MKURLContext : NSObject

@property (readonly, nonatomic) char originatedFromWatch;
@property (readonly, copy, nonatomic) GEOCompanionRouteContext *companionRouteContext;

- (void).cxx_destruct;
- (id)initWithOriginatedFromWatch:(char)a0 companionRouteContext:(id)a1;

@end
