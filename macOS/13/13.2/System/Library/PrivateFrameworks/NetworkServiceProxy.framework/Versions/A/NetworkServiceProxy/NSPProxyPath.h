@class NSUUID, NSNumber, NSArray, NSString, NSPProxyTokenInfo, NSMutableDictionary, NSPProxyAgentNetworkStatistics, NSPPrivacyProxyNetworkRegistration;
@protocol NSPProxyPathDelegate;

@interface NSPProxyPath : NSObject <NSSecureCoding, NSCopying, NSPPrivacyProxyNetworkRegistrationDelegate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<NSPProxyPathDelegate> delegate;
@property (retain, nonatomic) NSPProxyTokenInfo *ingressProxy;
@property (retain, nonatomic) NSPProxyTokenInfo *egressProxy;
@property (retain, nonatomic) NSArray *obliviousConfigs;
@property (nonatomic) unsigned long long proxyPathWeight;
@property (nonatomic) BOOL allowFallback;
@property (nonatomic) BOOL fallbackToQUIC;
@property (nonatomic) BOOL forceFallback;
@property (nonatomic) BOOL allowFailOpen;
@property (nonatomic) BOOL singleHopRegistered;
@property (nonatomic) BOOL multiHopRegistered;
@property (nonatomic) BOOL geohashSharingEnabled;
@property (retain, nonatomic) NSNumber *configEpoch;
@property (retain, nonatomic) NSUUID *nonDefaultAgentUUID;
@property (retain, nonatomic) NSPPrivacyProxyNetworkRegistration *singleHopRegistration;
@property (retain, nonatomic) NSPPrivacyProxyNetworkRegistration *multiHopRegistration;
@property (retain, nonatomic) NSMutableDictionary *obliviousAgentUUIDs;
@property (retain, nonatomic) NSMutableDictionary *obliviousHopRegistrations;
@property (retain, nonatomic) NSPProxyAgentNetworkStatistics *networkSingleHopAgentStatistics;
@property (retain, nonatomic) NSPProxyAgentNetworkStatistics *networkMultiHopAgentStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)resetError;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)resetStats;
- (void)reportErrorForNetworkRegistration:(id)a0 error:(int)a1 withOptions:(id)a2;
- (id)initWithDelegate:(id)a0 ingressProxy:(id)a1 egressProxy:(id)a2 proxyPathWeight:(unsigned long long)a3 obliviousConfigs:(id)a4 allowFallback:(BOOL)a5 fallbackToQUIC:(BOOL)a6 forceFallback:(BOOL)a7 allowFailOpen:(BOOL)a8 geohashSharingEnabled:(BOOL)a9 configEpoch:(id)a10 networkCharacteristics:(id)a11;
- (void)setupSingleHopProxyRegistrations;
- (void)setupMultiHopProxyRegistrations;
- (void)resetSingleHopProxyAgent;
- (void)resetObliviousHopProxyAgents;
- (void)resetMultiHopProxyAgent;
- (BOOL)isMultiHopRegistered;
- (BOOL)isSingleHopRegistered;
- (void)updateIngressProxy:(id)a0 egressProxy:(id)a1 proxyPathWeight:(unsigned long long)a2 obliviousConfigs:(id)a3;
- (void)enableFailOpen:(BOOL)a0;
- (void)updateGeohashSharing:(BOOL)a0;
- (void)updateConfigEpoch:(id)a0;
- (BOOL)proxyPathIsValid:(id)a0 proxyPathList:(id)a1;
- (BOOL)matchIngress:(id)a0;
- (BOOL)matchEgress:(id)a0;
- (void)handleNetworkCharacteristicsChange:(id)a0;
- (id)singleHopConfigurationHash;
- (id)multiHopConfigurationHash;
- (id)obliviousHopConfigHashForHostname:(id)a0;
- (id)obliviousHopAgentUUIDForHostname:(id)a0;

@end
