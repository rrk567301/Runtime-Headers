@class NSSet;

@interface IAPNavigationAccessory : NSObject

@property BOOL _wasFoundInLastUpdate;
@property unsigned long long identifier;
@property (retain) NSSet *components;

- (id)description;
- (id)initWithDict:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)requestedSourceNameForAnyComponent;
- (BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;

@end
