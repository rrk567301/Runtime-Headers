@class NSUUID, NSString, NSSet, NSObject;

@interface NetworkMO : UniqueMO <UniqueMoProtocol, DeploymentProtocol>

@property (nonatomic) short authFlags;
@property (readonly, nonatomic) int bssCount;
@property (copy, nonatomic) NSUUID *colocatedScopeId;
@property (nonatomic) long long colocatedState;
@property (nonatomic) short congestionDetermination;
@property (nonatomic) short coverageDetermination;
@property (nonatomic) BOOL didDeploymentChange;
@property (nonatomic) BOOL has2GHz;
@property (nonatomic) BOOL has5GHz;
@property (nonatomic) BOOL has6GHz;
@property (nonatomic) BOOL isHome;
@property (nonatomic) BOOL isLongTermNetwork;
@property (nonatomic) BOOL isMoving;
@property (nonatomic) BOOL isOmnipresent;
@property (nonatomic) BOOL isPublic;
@property (nonatomic) BOOL isWork;
@property (nonatomic) short latestCompleteWeekUsageCumulativePercentage;
@property (nonatomic) long long latestCompleteWeekUsageCumulativeSeconds;
@property (nonatomic) short latestCompleteWeekUsagePercentage;
@property (nonatomic) long long latestCompleteWeekUsageSeconds;
@property (nonatomic) long long networkScore;
@property (retain, nonatomic) NSObject *opaque;
@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) long long switchedAwayFromCount;
@property (nonatomic) long long switchedToCount;
@property (nonatomic) int t_lansCount;
@property (retain, nonatomic) NSSet *bss;
@property (retain, nonatomic) NSSet *faults;
@property (retain, nonatomic) NSSet *joins;
@property (retain, nonatomic) NSSet *leaves;
@property (retain, nonatomic) NSSet *linkTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accumulator;
+ (BOOL)setNetworkManagedObjectPropertyValueForKey:(id)a0 forKey:(id)a1 withValue:(id)a2;
+ (id)copyAllSsidsWithColocatedScopeIdStr:(id)a0 moc:(id)a1;
+ (BOOL)verifyConstraints:(id)a0 withError:(id *)a1;
+ (id)fetchRequest;
+ (id)predicateForNetworkInLAN:(id)a0;
+ (BOOL)removeNetwork:(id)a0 moc:(id)a1;
+ (BOOL)coalesceSsidsIntoColocatedScope:(id)a0 moc:(id)a1;
+ (id)predicateForNetworkContainingBSSID:(id)a0;
+ (id)propertiesForTraits:(id)a0;
+ (id)networkManagedObjectPropertyValue:(id)a0 forKey:(id)a1;
+ (BOOL)invalidateColocatedScopeForSsidArray:(id)a0 moc:(id)a1;
+ (id)copyAllSsidsWithColocatedScopeId:(id)a0 moc:(id)a1;
+ (id)predicateForNetworkWithTrait:(unsigned long long)a0;
+ (id)copyAllSsids:(id)a0;
+ (id)defaultPropertiesToFetch;
+ (id)allStoredSsids:(id)a0;
+ (id)predicateForNetworkHavingBand:(short)a0;
+ (id)getFirstColocatedScopeUuidForSsids:(id)a0 moc:(id)a1;

- (BOOL)classifyTraitsWithDistanceFilter:(double)a0 container:(id)a1;
- (BOOL)isEnterprise;

@end
