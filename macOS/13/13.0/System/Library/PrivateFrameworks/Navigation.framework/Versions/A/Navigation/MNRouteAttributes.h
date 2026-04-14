@class NSString, NSArray, NSError, geo_isolater, VGVehicle;

@interface MNRouteAttributes : GEORouteAttributes <MNVirtualGarageManagerObserver, NSSecureCoding, NSCopying> {
    NSArray *_latLngs;
    BOOL _forceUpdate;
    BOOL _hasOpenedVirtualGarageConnection;
    BOOL _hasResolvedVehicle;
    VGVehicle *_vehicle;
    NSError *_vgError;
    geo_isolater *_vehicleIsolator;
    NSArray *_lprRules;
    NSError *_lprError;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasResolvedVehicle;
@property (nonatomic) BOOL hasResolvedRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_loadLPRRulesForWaypoints:(id)a0 forceUpdate:(BOOL)a1 queue:(id)a2 completion:(id /* block */)a3;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)buildRouteAttributes:(id)a0 queue:(id)a1 result:(id /* block */)a2;
- (void)buildRouteAttributes:(id)a0 result:(id /* block */)a1;
- (void)buildRouteAttributesForETAUpdateRequest:(id)a0 queue:(id)a1 result:(id /* block */)a2;
- (BOOL)shouldRetryForError:(id)a0;
- (id)initWithAttributes:(id)a0 waypoints:(id)a1;
- (id)vehicle;
- (void)virtualGarageManager:(id)a0 didUpdateSelectedVehicle:(id)a1;
- (id)initWithAttributes:(id)a0 latLngs:(id)a1;
- (void)_resolveSelectedVehicle:(id)a0 completion:(id /* block */)a1;
- (void)_loadRulesIfNecessary:(id)a0 result:(id /* block */)a1;
- (void)_populateRouteAttributes:(id)a0 result:(id /* block */)a1;

@end
