@class NSMutableDictionary;

@interface IDSAPSUserPayload : NSObject

@property (retain, nonatomic) NSMutableDictionary *payload;

- (void).cxx_destruct;
- (id)extractCommandResponseFrom:(id)a0;
- (id)commandResponsePropertyNamesToHeaderMapping;
- (id)extractPayloadFrom:(id)a0 forKeys:(id)a1 andHeaderMap:(id)a2;
- (id)extractCommandWebTunnelResponseFrom:(id)a0;
- (id)commandWebTunnelResponsePropertyNamesToHeaderMapping;
- (id)extractMadridProtocolPayloadFrom:(id)a0;
- (id)propertyNamesToHeaderMapping;
- (id)extractMadridHttpHeadersFrom:(id)a0;
- (id)extractMadridDeliveryContextFrom:(id)a0;
- (id)extractQuickRelayPluginFrom:(id)a0;
- (id)extractQuickRelayAllocationStatusFrom:(id)a0;
- (id)extractQuickRelaySelfAllocTokenFrom:(id)a0;
- (id)extractQuickRelayPluginAllocationFrom:(id)a0;
- (void)logDiffBetween:(id)a0 andTarget:(id)a1 withKeyPath:(id)a2;
- (id)initWithBlastDoorObject:(id)a0;
- (void)logHeaderDiffAgainstSource:(id)a0;

@end
