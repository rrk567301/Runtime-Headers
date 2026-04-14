@interface GEORouteHypothesisIncident : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int routeIncidentType;
@property (readonly, nonatomic) int routeIncidentSignificance;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIncidentType:(int)a0 incidentSignificance:(int)a1;

@end
