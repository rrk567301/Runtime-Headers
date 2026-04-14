@class NSSet;

@interface MSPSharedTripReceiverCapabilities : NSObject <NSCopying> {
    NSSet *_supportedProperties;
    NSSet *_unsupportedProperties;
}

@property (readonly, nonatomic) BOOL supportsRoutingPathLeg;
@property (readonly, nonatomic) BOOL supportsWaypointRouteSharing;

+ (id)sydromeReceiverCapabilities;
+ (id)starskyReceiverCapabilities;
+ (id)legacyReceiverCapabilities;
+ (id)unrestrictedReceiverCapabilities;
+ (void)enumerateReceiverCapabilityConfigurationsWithBlock:(id /* block */)a0;
+ (void)enumerateReceiverCapabilityConfigurationsForState:(id)a0 withBlock:(id /* block */)a1;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRegistrationPropertiesSupported:(id)a0 propertiesUnsupported:(id)a1;
- (id)idsSendMessageOptions;

@end
