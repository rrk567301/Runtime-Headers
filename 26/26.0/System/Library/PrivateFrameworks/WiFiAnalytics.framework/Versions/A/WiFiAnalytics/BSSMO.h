@class NetworkMO, NSUUID, NSString, NSSet, NSDate, NSObject, LANMO;

@interface BSSMO : UniqueMO <UniqueMoProtocol>

@property (copy, nonatomic) NSUUID *apid;
@property (copy, nonatomic) NSUUID *apPhysicalScopeId;
@property (copy, nonatomic) NSString *apProfileID;
@property (nonatomic) short autoLeaveRssi;
@property (nonatomic) BOOL beaconMetricSubmitted;
@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) short disBcnLossCount;
@property (nonatomic) short disTrgDisCount;
@property (nonatomic) short disUsrForcedInWeakRssiCount;
@property (copy, nonatomic) NSUUID *idUsedInMetric;
@property (nonatomic) BOOL isEdgeForJoin;
@property (nonatomic) BOOL isEdgeForLeave;
@property (nonatomic) BOOL isTCPGood;
@property (copy, nonatomic) NSDate *lastSeen;
@property (nonatomic) BOOL manualJoinAfterAutoLeave;
@property (nonatomic) short mostRecentBand;
@property (nonatomic) short mostRecentChannel;
@property (retain, nonatomic) NSObject *neighborBSSIDs;
@property (retain, nonatomic) NSObject *neighborChannels;
@property (retain, nonatomic) NSObject *opaque;
@property (retain, nonatomic) NSObject *parsedBeacon;
@property (nonatomic) int phyMode;
@property (nonatomic) short roamTriggerRssi;
@property (retain, nonatomic) NSSet *faults;
@property (retain, nonatomic) NSSet *geoTags;
@property (retain, nonatomic) NSSet *joins;
@property (retain, nonatomic) LANMO *lan;
@property (retain, nonatomic) NSSet *leaves;
@property (retain, nonatomic) NSSet *linkTests;
@property (retain, nonatomic) NetworkMO *network;
@property (retain, nonatomic) NSSet *recoveries;
@property (retain, nonatomic) NSSet *roamsFrom;
@property (retain, nonatomic) NSSet *roamsTo;
@property (retain, nonatomic) NSSet *scanResult;
@property (retain, nonatomic) NSSet *scansFrom;
@property (retain, nonatomic) NSSet *usageStatsMonthly;
@property (retain, nonatomic) NSSet *usageStatsWeekly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)numBssInBand:(id)a0 bandIs24:(BOOL)a1 moc:(id)a2;
+ (id)accumulator;
+ (BOOL)coalesceBssidsIntoDeployment:(id)a0 moc:(id)a1;
+ (id)getDeploymentUuidForBssids:(id)a0 moc:(id)a1;
+ (id)formattedMACAddressNotation:(id)a0 as:(unsigned long long)a1;
+ (id)allSsidsForBssid:(id)a0 moc:(id)a1;
+ (id)constraintsWithBSSID:(id)a0;
+ (BOOL)verifyConstraints:(id)a0 withError:(id *)a1;
+ (id)fetchRequest;
+ (id)copyBssidsForDeployment:(id)a0 deploymentUuid:(id)a1 moc:(id)a2;
+ (id)allBssidsForSsid:(id)a0 moc:(id)a1;
+ (id)bssManagedObjectPropertyValue:(id)a0 forKey:(id)a1;
+ (BOOL)setBssManagedObjectPropertyValueForKey:(id)a0 forKey:(id)a1 withValue:(id)a2;
+ (id)defaultPropertiesToFetch;
+ (id)propertyForAging;
+ (id)copyDeploymentUuidsForSsid:(id)a0 moc:(id)a1;


@end
