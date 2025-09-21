@class NSSet;

@interface MSPSharedTripReceiverCapabilities : NSObject <NSCopying> {
    NSSet *_supportedProperties;
    NSSet *_unsupportedProperties;
}

@property (readonly, nonatomic) char supportsRoutingPathLeg;
@property (readonly, nonatomic) char supportsWaypointRouteSharing;

+ (id)allKnownReceiverCapabilities;
+ (void)enumerateKnownReceiverCapabilityConfigurationsForState:(id)a0 withBlock:(id /* block */)a1;
+ (void)enumerateReceiverCapabilityConfigurations:(id)a0 forState:(id)a1 withBlock:(id /* block */)a2;
+ (void)fetchReceiverCapabilitiesForDestinations:(id)a0 completion:(id /* block */)a1;
+ (id)legacyReceiverCapabilities;
+ (id)starskyReceiverCapabilities;
+ (id)sydromeReceiverCapabilities;
+ (id)unrestrictedReceiverCapabilities;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)idsSendMessageOptions;
- (id)initWithIDSEndpointCapabilities:(id)a0;
- (id)initWithRegistrationPropertiesSupported:(id)a0 propertiesUnsupported:(id)a1;

@end
