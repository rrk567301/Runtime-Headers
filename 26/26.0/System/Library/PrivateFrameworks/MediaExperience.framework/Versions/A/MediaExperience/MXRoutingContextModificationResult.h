@class NSString, MXRoutingContextModificationMetrics, NSArray;

@interface MXRoutingContextModificationResult : NSObject

@property (readonly, retain, nonatomic) NSString *routeConfigUpdateReason;
@property (readonly, retain, nonatomic) MXRoutingContextModificationMetrics *modificationMetrics;
@property (readonly, retain, nonatomic) NSArray *previousRouteDescriptors;
@property (readonly, retain, nonatomic) NSArray *currentRouteDescriptors;

- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithRouteConfigUpdatedReason:(id)a0 modificationMetrics:(id)a1 previousRouteDescriptors:(id)a2 currentRouteDescriptors:(id)a3;

@end
