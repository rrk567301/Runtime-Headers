@class NSSet;

@interface IAPNavigationAccessory : NSObject

@property BOOL _wasFoundInLastUpdate;
@property unsigned long long identifier;
@property (retain) NSSet *components;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDict:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)requestedSourceNameForAnyComponent;
- (BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;

@end
