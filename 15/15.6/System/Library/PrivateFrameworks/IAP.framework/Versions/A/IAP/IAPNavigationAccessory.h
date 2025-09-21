@class NSSet;

@interface IAPNavigationAccessory : NSObject

@property char _wasFoundInLastUpdate;
@property unsigned long long identifier;
@property (retain) NSSet *components;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (BOOL)requestedSourceNameForAnyComponent;
- (BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;

@end
