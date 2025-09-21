@class NetworkMO, NSUUID, NSString, BlacklistMO, NSDate, NSObject, NSSet;

@interface BSSMO : NSManagedObject

@property (copy, nonatomic) NSUUID *apid;
@property (copy, nonatomic) NSUUID *apPhysicalScopeId;
@property (copy, nonatomic) NSString *apProfileID;
@property (nonatomic) short autoLeaveRssi;
@property (nonatomic) char beaconMetricSubmitted;
@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) short channel;
@property (nonatomic) int channelFlags;
@property (nonatomic) short disBcnLossCount;
@property (nonatomic) short disTrgDisCount;
@property (nonatomic) short disUsrForcedInWeakRssiCount;
@property (copy, nonatomic) NSUUID *idUsedInMetric;
@property (nonatomic) char isEdgeForJoin;
@property (nonatomic) char isEdgeForLeave;
@property (nonatomic) char isTCPGood;
@property (copy, nonatomic) NSDate *lastSeen;
@property (nonatomic) char manualJoinAfterAutoLeave;
@property (retain, nonatomic) NSObject *neighborBSSIDs;
@property (retain, nonatomic) NSObject *neighborChannels;
@property (retain, nonatomic) NSObject *parsedBeacon;
@property (nonatomic) int phyMode;
@property (nonatomic) short roamTriggerRssi;
@property (retain, nonatomic) NSObject *unparsedBeacon;
@property (retain, nonatomic) BlacklistMO *blacklist;
@property (retain, nonatomic) NSSet *faults;
@property (retain, nonatomic) NSSet *geoTag;
@property (retain, nonatomic) NSSet *joins;
@property (retain, nonatomic) NSSet *leaves;
@property (retain, nonatomic) NSSet *linkTests;
@property (retain, nonatomic) NetworkMO *network;
@property (retain, nonatomic) NSSet *recoveries;
@property (retain, nonatomic) NSSet *roamsFrom;
@property (retain, nonatomic) NSSet *roamsTo;
@property (retain, nonatomic) NSSet *scanResult;
@property (retain, nonatomic) NSSet *scansFrom;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)copyDeploymentUuidsForSsid:(id)a0 moc:(id)a1;
+ (id)getDeploymentUuidForBssids:(id)a0 moc:(id)a1;
+ (id)allBssidsForSsid:(id)a0 moc:(id)a1;
+ (id)allSsidsForBssid:(id)a0 moc:(id)a1;
+ (id)bssManagedObjectPropertyValue:(id)a0 forKey:(id)a1;
+ (char)coalesceBssidsIntoDeployment:(id)a0 moc:(id)a1;
+ (id)copyBssidsForDeployment:(id)a0 deploymentUuid:(id)a1 moc:(id)a2;
+ (id)generateInstance:(id)a0 ssid:(id)a1 created:(char *)a2 moc:(id)a3;
+ (id)getInstance:(id)a0 ssid:(id)a1 moc:(id)a2;
+ (unsigned long long)numBssInBand:(id)a0 bandIs24:(char)a1 moc:(id)a2;
+ (char)setBssManagedObjectPropertyValueForKey:(id)a0 forKey:(id)a1 withValue:(id)a2;

@end
