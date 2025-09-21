@class MTRSetupPayload, NSString, MTSDeviceSetupTopology, NSDictionary;
@protocol MTDeviceSetupRequestSwiftWrapper;

@interface MTSDeviceSetupRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) id<MTDeviceSetupRequestSwiftWrapper> wrappedRequest;
@property (readonly) MTSDeviceSetupTopology *topology;
@property (readonly, copy) NSString *ecosystemName;
@property (readonly) char shouldScanNetworks;
@property (readonly) MTRSetupPayload *setupPayload;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithSerializedRequest:(id)a0;
- (id)initWithEcosystemName:(id)a0 homeNames:(id)a1 blockedDevicePairings:(id)a2;
- (id)initWithWrappedRequest:(id)a0;
- (char)shouldShowDeviceWithUUID:(id)a0 vendorID:(id)a1 productID:(id)a2 serialNumber:(id)a3;
- (char)shouldShowDeviceWithUUID:(id)a0 vendorID:(id)a1 productID:(id)a2 serialNumber:(id)a3 rootPublicKey:(id)a4 nodeID:(id)a5;

@end
