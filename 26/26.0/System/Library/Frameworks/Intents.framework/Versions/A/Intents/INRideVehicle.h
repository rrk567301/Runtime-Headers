@class NSString, CLLocation, INImage;

@interface INRideVehicle : NSObject <INCacheableContainer, INImageProxyInjecting, INRideVehicleExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) CLLocation *location;
@property (copy) NSString *registrationPlate;
@property (copy) NSString *manufacturer;
@property (copy) NSString *model;
@property (copy) INImage *mapAnnotationImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)_intents_cacheableObjects;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
